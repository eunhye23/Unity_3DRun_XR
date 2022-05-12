using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    private static readonly string FirstPlay = "FirstPlay";
    private static readonly string BackGroundPref = "BackGroundPref";
    private static readonly string SoundEffectPref = "SoundEffectPref";

    private int firstPlayInt;
    public Slider backGroundSlider, soundEffectSlider;
    private float backGroundFloat, soundEffectFloat;

    //public AudioSource lobbybackgroundAudio;
    public AudioSource[] backgroundAudio;
    public AudioSource[] soundEffectAudio;



    void Start()
    {
        
        firstPlayInt = PlayerPrefs.GetInt(FirstPlay);

        if(firstPlayInt == 0)
        {
            backGroundFloat = 0.35f;
            soundEffectFloat = 0.75f;
            backGroundSlider.value = backGroundFloat;
            soundEffectSlider.value = soundEffectFloat;
            PlayerPrefs.SetFloat(BackGroundPref, backGroundFloat);
            PlayerPrefs.SetFloat(SoundEffectPref, soundEffectFloat);
            PlayerPrefs.SetInt(FirstPlay, -1);
        }
        else
        {
           backGroundFloat = PlayerPrefs.GetFloat(BackGroundPref);
            backGroundSlider.value = backGroundFloat;
            soundEffectFloat = PlayerPrefs.GetFloat(SoundEffectPref);
            soundEffectSlider.value = soundEffectFloat;

        }
    }

    public void SaveSound()
    {
        PlayerPrefs.SetFloat(BackGroundPref, backGroundSlider.value);
        PlayerPrefs.SetFloat(SoundEffectPref, soundEffectSlider.value);
    }

    void OnApplicationFocus(bool focus)
    {
        if(!focus)
        {
            SaveSound();
        }
    }
    public void UpdateSound()
    {
        //backgroundAudio.volume = backGroundSlider.value;
        for (int i = 0; i < backgroundAudio.Length; i++)
        {
            backgroundAudio[i].volume = backGroundSlider.value;
        }


        for (int i = 0; i < soundEffectAudio.Length; i++)
        {
            soundEffectAudio[i].volume = soundEffectSlider.value;
        }
    }
    
}
