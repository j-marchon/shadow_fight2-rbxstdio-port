// PHGCJKBCONG$$OANGGKCBAOJ @ RVA 0x324C90C

void PHGCJKBCONG__OANGGKCBAOJ(PHGCJKBCONG_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  SFButton_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_02;
  UnityEngine_UI_Button_o **ppUVar2;
  UnityEngine_Events_UnityEvent_o *__this_03;
  
                    /* try { // try from 0334c91c to 0344c947 has its CatchHandler @ 0334ca94 */
  if ((DAT_04567104 & 1) == 0) {
    FUN_01bab630(&Method_PHGCJKBCONG_OANGGKCBAOJ__);
    FUN_01bab630(&SFButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567104 = 1;
  }
                    /* try { // try from 0334c958 to 0344c95b has its CatchHandler @ 0334ca90 */
  if ((__this->fields).KLGOFMGCGLA != false) {
                    /* try { // try from 0334c95c to 0344ca6b has its CatchHandler @ 0334c774 */
    __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) goto LAB_0334ca7c;
    Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
  }
  if (((__this->fields).HPLBPEKKNBB != false) &&
     (__this_01 = (SFButton_o *)(__this->fields).MEIDNEHHHKI, __this_01 != (SFButton_o *)0x0)) {
    bVar1 = (SFButton_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)SFButton_TypeInfo))
    {
      SFButton__set_IsFlashing(__this_01,false,(MethodInfo *)0x0);
    }
  }
  ppUVar2 = &(__this->fields).MEIDNEHHHKI;
  AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)*ppUVar2,(MethodInfo *)0x0);
  if (*ppUVar2 != (UnityEngine_UI_Button_o *)0x0) {
    __this_03 = (UnityEngine_Events_UnityEvent_o *)((*ppUVar2)->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_03,call,(MethodInfo *)0x0);
      if ((__this->fields).ILNJNKADLOE != false) {
        if (*ppUVar2 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0334ca7c;
        NAJBHKGHIGK__JKGCKABLLKD
                  ((UnityEngine_Events_UnityEventBase_o *)((*ppUVar2)->fields).m_OnClick,2,
                   (MethodInfo *)0x0);
      }
      *ppUVar2 = (UnityEngine_UI_Button_o *)0x0;
      thunk_FUN_01c20e04(ppUVar2,0);
      __this_02 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_02 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_02,false,(MethodInfo *)0x0);
                    /* try { // try from 0334ca6c to 0344ca6f has its CatchHandler @ 0334ca8c */
                    /* try { // try from 0334ca70 to 0344ca73 has its CatchHandler @ 0334ca88 */
                    /* try { // try from 0334ca74 to 0344ca77 has its CatchHandler @ 0334c774 */
                    /* try { // try from 0334ca78 to 0344ca7b has its CatchHandler @ 0334ca84 */
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0334ca7c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0334ca7c to 0344caa7 has its CatchHandler @ 0334c774 */
  FUN_01bab8c8();
}

