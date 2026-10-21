// TypeDefIndex 2326
// Namespace: Nekki.SF2.GUI.Common
// public class SceneSwitchControls : MonoBehaviour
// Fields:
//   private const FBBNEILNOKK HKLOPOEJKFG = 19;
//   private const FBBNEILNOKK ALEKGFDCIDF = 21;
//   private const FBBNEILNOKK NOLCIEINCHI = 1;
//   private GameObject _LeftHintSpacing; // 0x20
//   private GameObject _LeftHint; // 0x28
//   private SFButton _LeftSceneButton; // 0x30
//   private LabelAlias _LeftSceneText; // 0x38
//   private GameObject _RightHintSpacing; // 0x40
//   private GameObject _RightHint; // 0x48
//   private SFButton _RightSceneButton; // 0x50
//   private LabelAlias _RightSceneText; // 0x58
//   private GameObject _SceneTitlePanel; // 0x60
//   private LabelAlias _SceneTitleText; // 0x68
//   private float _SceneSwitchDelay; // 0x70
//   private DBMPKPJGIPI DKJLOMNAEDI; // 0x74
//   private bool CEPACCGIINO; // 0x78
//   private DBMPKPJGIPI JGFFGIKGDGN; // 0x7C
//   private DBMPKPJGIPI EECIOLICNKK; // 0x80
//   private bool BFBPMFHCNFK; // 0x84
//   private float BCANKCALGNE; // 0x88
//   private Transform OLJOLOPEIOG; // 0x90
//   private int LKBDBKPIJHI; // 0x98
//   private int KMFLKKGAKKJ; // 0x9C

// ===== public DBMPKPJGIPI get_RightScene()  [RVA 0x331F484]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$get_RightScene @ RVA 0x331F484

int32_t Nekki_SF2_GUI_Common_SceneSwitchControls__get_RightScene
                  (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  return (__this->fields).EECIOLICNKK;
}


// ===== public void set_IsEnabled(bool CJNHFNHJHPE)  [RVA 0x331F48C]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$set_IsEnabled @ RVA 0x331F48C

void Nekki_SF2_GUI_Common_SceneSwitchControls__set_IsEnabled
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool value;
  
  if (CJNHFNHJHPE) {
    uVar1 = (__this->fields).DKJLOMNAEDI - 3;
    if (4 < uVar1) goto LAB_0341f4bc;
    value = (bool)((byte)(0x17 >> (ulong)(uVar1 & 0x1f)) & 1);
  }
  else {
    if (__this == (Nekki_SF2_GUI_Common_SceneSwitchControls_o *)0x0) goto LAB_0341f500;
LAB_0341f4bc:
    value = false;
  }
  pUVar2 = (__this->fields)._LeftHint;
  (__this->fields).CEPACCGIINO = value;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._RightHint;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CEPACCGIINO,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._SceneTitlePanel;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CEPACCGIINO,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0341f500:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_LeftScene(DBMPKPJGIPI CJNHFNHJHPE)  [RVA 0x331F528]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$set_LeftScene @ RVA 0x331F528

void Nekki_SF2_GUI_Common_SceneSwitchControls__set_LeftScene
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._LeftSceneText;
  (__this->fields).JGFFGIKGDGN = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = MEJPIPJPKNP__LJOKKJPBMGO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x331F55C]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$.ctor @ RVA 0x331F55C

void Nekki_SF2_GUI_Common_SceneSwitchControls___ctor
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  (__this->fields)._SceneSwitchDelay = 1.5;
  (__this->fields).JGFFGIKGDGN = 0xb;
  (__this->fields).EECIOLICNKK = 0xb;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void Awake()  [RVA 0x331F574]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$Awake @ RVA 0x331F574

void Nekki_SF2_GUI_Common_SceneSwitchControls__Awake
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  NDPMLPGANCI_o *__this_00;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  UnityEngine_Transform_o **ppUVar4;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  
  pUVar2 = (__this->fields)._LeftHint;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    ppUVar4 = &(__this->fields).OLJOLOPEIOG;
    *ppUVar4 = pUVar3;
    thunk_FUN_01c20e04(ppUVar4,pUVar3);
    pUVar2 = (__this->fields)._LeftHint;
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      iVar1 = UnityEngine_Transform__GetSiblingIndex(pUVar3,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._RightHint;
      (__this->fields).LKBDBKPIJHI = iVar1;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        iVar1 = UnityEngine_Transform__GetSiblingIndex(pUVar3,(MethodInfo *)0x0);
        (__this->fields).KMFLKKGAKKJ = iVar1;
        __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 != (NDPMLPGANCI_o *)0x0) {
          iVar1 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
          (__this->fields).DKJLOMNAEDI = iVar1;
          Nekki_SF2_GUI_Common_SceneSwitchControls__Refresh(__this,method_00);
          Nekki_SF2_GUI_Common_SceneSwitchControls__set_IsEnabled(__this,false,in_x2);
          __this_01 = (__this->fields)._SceneTitleText;
          CJNHFNHJHPE = MEJPIPJPKNP__LJOKKJPBMGO((__this->fields).DKJLOMNAEDI,(MethodInfo *)0x0);
          if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsEnabled()  [RVA 0x331F658]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$get_IsEnabled @ RVA 0x331F658

bool Nekki_SF2_GUI_Common_SceneSwitchControls__get_IsEnabled
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  return (__this->fields).CEPACCGIINO;
}


// ===== public void set_RightScene(DBMPKPJGIPI CJNHFNHJHPE)  [RVA 0x331F660]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$set_RightScene @ RVA 0x331F660

void Nekki_SF2_GUI_Common_SceneSwitchControls__set_RightScene
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._RightSceneText;
  (__this->fields).EECIOLICNKK = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = MEJPIPJPKNP__LJOKKJPBMGO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_TargetScene(DBMPKPJGIPI CJNHFNHJHPE)  [RVA 0x331F650]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$set_TargetScene @ RVA 0x331F650

void Nekki_SF2_GUI_Common_SceneSwitchControls__set_TargetScene
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).DKJLOMNAEDI = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_SceneSwitchControls__Refresh(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== private void OnDestroy()  [RVA 0x331F6F8]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$OnDestroy @ RVA 0x331F6F8

void Nekki_SF2_GUI_Common_SceneSwitchControls__OnDestroy
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  return;
}


// ===== private static bool MGPKIPFGKHJ(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x331F504]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$MGPKIPFGKHJ @ RVA 0x331F504

bool Nekki_SF2_GUI_Common_SceneSwitchControls__MGPKIPFGKHJ(int32_t NFOBCFADDHA,MethodInfo *method)

{
  if (NFOBCFADDHA - 3U < 5) {
    return (bool)((byte)(0x17 >> (ulong)(NFOBCFADDHA - 3U & 0x1f)) & 1);
  }
  return false;
}


// ===== public DBMPKPJGIPI get_LeftScene()  [RVA 0x331F6FC]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$get_LeftScene @ RVA 0x331F6FC

int32_t Nekki_SF2_GUI_Common_SceneSwitchControls__get_LeftScene
                  (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  return (__this->fields).JGFFGIKGDGN;
}


// ===== public void Refresh()  [RVA 0x331F694]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$Refresh @ RVA 0x331F694

void Nekki_SF2_GUI_Common_SceneSwitchControls__Refresh
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  uint uVar1;
  MethodInfo *in_x2;
  
  uVar1 = (__this->fields).DKJLOMNAEDI - 3;
  if ((uVar1 < 5) && ((0x17U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    CJNHFNHJHPE = *(int32_t *)(&DAT_00e297ec + (long)(int)uVar1 * 4);
    Nekki_SF2_GUI_Common_SceneSwitchControls__set_LeftScene
              (__this,*(int32_t *)(&DAT_00e297d8 + (long)(int)uVar1 * 4),in_x2);
    Nekki_SF2_GUI_Common_SceneSwitchControls__set_RightScene(__this,CJNHFNHJHPE,in_x2);
    return;
  }
  return;
}


// ===== public DBMPKPJGIPI get_TargetScene()  [RVA 0x331F704]
// Nekki.SF2.GUI.Common.SceneSwitchControls$$get_TargetScene @ RVA 0x331F704

int32_t Nekki_SF2_GUI_Common_SceneSwitchControls__get_TargetScene
                  (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  return (__this->fields).DKJLOMNAEDI;
}

