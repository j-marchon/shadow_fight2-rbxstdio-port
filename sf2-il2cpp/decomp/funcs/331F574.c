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

