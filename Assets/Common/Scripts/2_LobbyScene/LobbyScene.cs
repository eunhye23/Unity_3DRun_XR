using System.Collections;
using System.Collections.Generic;
using MHomiLibrary;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;

//using DG.Tweening;

public class LobbyScene : HSingleton<LobbyScene>


//HSingleton<LobbyScene>
{
    protected LobbyScene() { }

    public RectTransform CanvasTM;

    public GameObject OptionPanel;

    public TextMeshProUGUI coinT;
    public TextMeshProUGUI coinT_Shop;

    public GameObject shopPanel;

    private GameInstance gameInstance;
    private AudioManager audioManager;

    bool isStage01;
    bool isStage02;

    public List<Image> StarImgs01;

    public List<Image> StarImgs02;

    //public List<AudioSource> soundEffectAudio;
    private void Awake()
    {
        gameInstance = GameObject.Find("GameInstance").GetComponent<GameInstance>();
        audioManager = GameObject.Find("AudioManager").GetComponent<AudioManager>();
    }


    void Start()
    {
        GotoIntroScene();

        StageStarsAlphaZero(StarImgs01);
        StageStarsAlphaZero(StarImgs02);

        audioManager.backgroundAudio[0].Play();
    }

    void StageStarsAlphaZero(List<Image> starImg)
    {

        for (int i = 0; i < 3; i++)
        {
            Color color = starImg[i].GetComponent<Image>().color;
            color.a = 0f;
            starImg[i].GetComponent<Image>().color = color;

        }

    }
    /// <summary>
    /// 로고씬으로 가기^^^ 고고싱
    /// </summary>
    private void GotoIntroScene()
    {
       //if (GameObject.Find("GameInstance") == null)
       //    SceneManager.LoadScene("1_LoginScene");
    }

    void Update()
    {
        coinT.text = gameInstance.coinScore.ToString();
        coinT_Shop.text = gameInstance.coinScore.ToString();

        gameInstance.Stage01Star(StarImgs01);

    }
    //[사용자 정의함수]===================================================================
    //====================================================================================
    //====================================================================================
    //====================================================================================
    //====================================================================================
    //====================================================================================

    public void StageBtn01()
    {
        isStage01 = true;

        audioManager.soundEffectAudio[0].Play();

        if (isStage02)
            isStage02 = false;

        shopPanel.SetActive(true);
    }
    
    public void StageBtn02()
    {
        isStage02 = true;

        audioManager.soundEffectAudio[0].Play();

        if (isStage01)
            isStage01 = false;

        shopPanel.SetActive(true);
    }

    /// <summary>
    /// 게임씬으로고고싱
    /// </summary>
    public void GotoGameScene()
    {
        StartCoroutine(GoToGameSceneCoroutine());
    }

    IEnumerator GoToGameSceneCoroutine()
    {
        if (isStage01)
        {
            //SoundManager.Play(E_SOUNLIST.E_SHOTBULLET);

            if (GameInstance.I.CreatePopupLoading(CanvasTM))
            {
                Debug.Log("개개개개개개개개개");
            }

            yield return new WaitForSeconds(0.5f);

            SceneManager.LoadScene("3_GameScene");

            isStage01 = false;
            //SoundManager.AStop();
            audioManager.backgroundAudio[0].Stop();
        }

        else if (isStage02)
        {
            //SoundManager.Play(E_SOUNLIST.E_SHOTBULLET);

            if (GameInstance.I.CreatePopupLoading(CanvasTM))
            {
                Debug.Log("개개개개개개개개개");
            }

            yield return new WaitForSeconds(0.5f);

            SceneManager.LoadScene("4_GameScene");

            isStage02 = false;
            audioManager.backgroundAudio[0].Stop();
        }

    }

    public void GoToOptionBtn()
    {
        audioManager.soundEffectAudio[0].Play();
        //soundEffectAudio[0].Play();     
        OptionPanel.SetActive(true);
       
    }
    public void GoToBackBtn()
    {
        audioManager.soundEffectAudio[0].Play();
        OptionPanel.SetActive(false);
        
    }

    public void GoToLobbyScene()
    {
        audioManager.soundEffectAudio[0].Play();
        shopPanel.SetActive(false);
    }

    public void GoToQuitBtn()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit(); // 어플리케이션 종료
#endif
    }
}
