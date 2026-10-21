// Nekki.SF2.GUI.Dialogs.NewsDialog$$Init @ RVA 0x350D084

void Nekki_SF2_GUI_Dialogs_NewsDialog__Init
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  SFButton_o *__this_01;
  System_Action_object__o *pSVar2;
  Nekki_SF2_GUI_InfoButton_o *__this_02;
  
  if ((DAT_045688d7 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<SFButton>__);
    FUN_01bab630(&JOAIBHHONIM_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17803);
    DAT_045688d7 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (JOAIBHHONIM_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JOAIBHHONIM_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    (__this->fields).HAGOPBBNBGE =
         (System_Collections_Generic_List_BCGLDKLKKDA__o *)IMMNELPBGIF[1].klass;
    thunk_FUN_01c20e04();
  }
  (__this->fields).super.IsQuestDialog = true;
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_17803,StringLiteral_9679,
             StringLiteral_3640,1,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._picture;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_01 = (SFButton_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this_00,
                           Method_UnityEngine_Component_GetComponent<SFButton>__);
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (SFButton_o *)0x0) {
      SFButton__AddEventListener(__this_01,0,pSVar2,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._infoButton;
      pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)__this_02,2,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

