using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundSlider : MonoBehaviour
{
    [SerializeField] Slider backVolumeSlider;
    

    // Start is called before the first frame update
    void Start()
    {
        if(!PlayerPrefs.HasKey("sunshine-108600"))
        {
            PlayerPrefs.SetFloat("sunshine-108600", 1);
            Load();
        }
        else
        {
            Load();
        }
    }

    public void ChangeVolume()
    {
        AudioListener.volume = backVolumeSlider.value;
        Save();
    }
    private void Load()
    {
        backVolumeSlider.value = PlayerPrefs.GetFloat("sunshine-108600");
    }
    private void Save()
    {
        PlayerPrefs.SetFloat("sunshine-108600", backVolumeSlider.value);
    }
}
