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

    public GameObject shopPanel;

    GameInstance gameInstance;

    bool isStage;


    private void Awake()
    {
        gameInstance = GameObject.Find("GameInstance").GetComponent<GameInstance>();
       
    }
    void Start()
    {        
        GotoIntroScene();
        SoundManager.Play(E_SOUNLIST.E_LobbySound);
    }

    void Update()
    {
        coinT.text = gameInstance.coinScore.ToString();

    }
    //[사용자 정의함수]===================================================================
    //====================================================================================
    //====================================================================================
    //====================================================================================
    //====================================================================================
    //====================================================================================
    
    /// <summary>
    /// 로고씬으로 가기^^^ 고고싱
    /// </summary>
    private void GotoIntroScene()
    {
        //if (GameObject.Find("GameInstance") == null)
        //    SceneManager.LoadScene("1_LoginScene");
    }
    public void StageBtn()
    {
        SoundManager.Play(E_SOUNLIST.E_SHOTBULLET);
        isStage = true;
        shopPanel.SetActive(true);
    }

    /// <summary>
    /// 게임씬으로고고싱
    /// </summary>
    public void GotoGameScene()
    {
        if(isStage)
        {

            //SoundManager.Play(E_SOUNLIST.E_SHOTBULLET);
           
            if (GameInstance.I.CreatePopupLoading(CanvasTM))
            {
                Debug.Log("개개개개개개개개개");
            }

            Invoke("GotoGameSceneInvoke", 0.5f);

            isStage = false;
            SoundManager.AStop();
        }
    }

    void GotoGameSceneInvoke()
    {
        
        SceneManager.LoadScene("3_GameScene");
    }

    public void GoToOptionBtn()
    {
        SoundManager.Play(E_SOUNLIST.E_SHOTBULLET);
        OptionPanel.SetActive(true);
       
    }
    public void GoToBackBtn()
    {
        SoundManager.Play(E_SOUNLIST.E_SHOTBULLET);
        OptionPanel.SetActive(false);
        
    }

    public void GoToLobbyScene()
    {
        SoundManager.Play(E_SOUNLIST.E_SHOTBULLET);
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
