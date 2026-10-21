// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$Create @ RVA 0x352D244

Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *
Nekki_SF2_GUI_Common_Credits_CreditsScreen__Create(System_Action_o *CONGNMGDFPP,MethodInfo *method)

{
  Il2CppObject *original;
  Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *pNVar1;
  System_Action_o **ppSVar2;
  
  if ((DAT_04568a36 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<CreditsScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<CreditsScreen>__);
    FUN_01bab630(&StringLiteral_10398);
    DAT_04568a36 = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10398,Method_UnityEngine_Resources_Load<CreditsScreen>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pNVar1 = (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,Method_UnityEngine_Object_Instantiate<CreditsScreen>__);
  if (pNVar1 != (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *)0x0) {
    ppSVar2 = &(pNVar1->fields).MOIEPPGDHNH;
    *ppSVar2 = CONGNMGDFPP;
    thunk_FUN_01c20e04(ppSVar2,CONGNMGDFPP);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

