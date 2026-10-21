// Nekki.SF2.GUI.Shop.ShopBottomPanel$$ScrollOnStartTo @ RVA 0x33005B0

void Nekki_SF2_GUI_Shop_ShopBottomPanel__ScrollOnStartTo
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HONPNKFABKF,MethodInfo *method)

{
  bool bVar1;
  int32_t HIIGJGLEOFH;
  Nekki_SF2_GUI_Common_SectionButton_o *x;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  int32_t local_38;
  int32_t local_34;
  
                    /* try { // try from 034005b0 to 035005b7 has its CatchHandler @ 03400618 */
                    /* try { // try from 034005b8 to 035005bf has its CatchHandler @ 03400624 */
                    /* try { // try from 034005c0 to 035005c3 has its CatchHandler @ 03400610 */
                    /* try { // try from 034005c4 to 035005c7 has its CatchHandler @ 03400608 */
                    /* try { // try from 034005c8 to 035005cb has its CatchHandler @ 03400600 */
                    /* try { // try from 034005cc to 035005cf has its CatchHandler @ 034005f8 */
                    /* try { // try from 034005d0 to 035005d3 has its CatchHandler @ 034005f4 */
                    /* try { // try from 034005d4 to 035005d7 has its CatchHandler @ 034000a4 */
                    /* try { // try from 034005d8 to 035005db has its CatchHandler @ 034005e4 */
                    /* try { // try from 034005dc to 03500637 has its CatchHandler @ 034000a4 */
  if ((DAT_04567717 & 1) == 0) {
                    /* catch() { ... } // from try @ 034005d8 with catch @ 034005e4 */
                    /* catch() { ... } // from try @ 03400558 with catch @ 034005e8 */
                    /* catch() { ... } // from try @ 0340054c with catch @ 034005ec */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GetButtonBySection__);
                    /* catch() { ... } // from try @ 0340050c with catch @ 034005f0 */
                    /* catch() { ... } // from try @ 034005d0 with catch @ 034005f4 */
                    /* catch() { ... } // from try @ 034005cc with catch @ 034005f8 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 034004c0 with catch @ 034005fc */
                    /* catch() { ... } // from try @ 034005c8 with catch @ 03400600 */
                    /* catch() { ... } // from try @ 0340053c with catch @ 03400604 */
    FUN_01bab630(&HPPDIEDAKEC_TypeInfo);
                    /* catch() { ... } // from try @ 034005c4 with catch @ 03400608 */
                    /* catch() { ... } // from try @ 034004b0 with catch @ 0340060c */
                    /* catch() { ... } // from try @ 034005c0 with catch @ 03400610 */
    FUN_01bab630(&object___TypeInfo);
                    /* catch() { ... } // from try @ 03400484 with catch @ 03400614 */
                    /* catch() { ... } // from try @ 034005b0 with catch @ 03400618 */
                    /* catch() { ... } // from try @ 034002ec with catch @ 0340061c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 03400290 with catch @ 03400620 */
                    /* catch() { ... } // from try @ 034005b8 with catch @ 03400624 */
                    /* catch() { ... } // from try @ 03400350 with catch @ 03400628 */
    FUN_01bab630(&POIJDKLHHKO_TypeInfo);
    FUN_01bab630(&StringLiteral_12003);
                    /* try { // try from 03400638 to 0350063b has its CatchHandler @ 0340064c */
    DAT_04567717 = 1;
  }
  HIIGJGLEOFH = BKBFFEJEBAI__PPGMDDODKFG(HONPNKFABKF,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03400638 with catch @ 0340064c */
                    /* try { // try from 03400654 to 035006c7 has its CatchHandler @ 03400724 */
  x = Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GetButtonBySection
                ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,HIIGJGLEOFH,
                 Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GetButtonBySection__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
       (__this_00 = (UnityEngine_Events_UnityEvent_o *)(x->fields).super.super.super.m_OnClick,
       __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
      UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 034004d0 with catch @ 034006c8
                       try { // try from 034006c8 to 035006d7 has its CatchHandler @ 034000a4 */
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    local_34 = HONPNKFABKF;
                    /* try { // try from 034006d8 to 035006db has its CatchHandler @ 03400700 */
                    /* try { // try from 034006dc to 03500707 has its CatchHandler @ 034000a4 */
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(HPPDIEDAKEC_TypeInfo,&local_34);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_034007b4:
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
                    /* catch() { ... } // from try @ 034006d8 with catch @ 03400700 */
      if ((int)args->max_length != 0) {
                    /* try { // try from 03400708 to 0350070f has its CatchHandler @ 03400724 */
        args->m_Items[0] = pIVar2;
                    /* try { // try from 03400710 to 0350071b has its CatchHandler @ 034000a4 */
        thunk_FUN_01c20e04(args->m_Items,pIVar2);
                    /* try { // try from 0340071c to 03500723 has its CatchHandler @ 03400724 */
        local_38 = HIIGJGLEOFH;
                    /* catch() { ... } // from try @ 03400654 with catch @ 03400724
                       catch() { ... } // from try @ 03400708 with catch @ 03400724
                       catch() { ... } // from try @ 0340071c with catch @ 03400724 */
                    /* try { // try from 03400728 to 03500807 has its CatchHandler @ 03400728
                       catch() { ... } // from try @ 03400728 with catch @ 03400728
                       catch() { ... } // from try @ 03400ac8 with catch @ 03400728
                       catch() { ... } // from try @ 03400bf8 with catch @ 03400728
                       catch() { ... } // from try @ 03400cf8 with catch @ 03400728
                       catch() { ... } // from try @ 03400d28 with catch @ 03400728
                       catch() { ... } // from try @ 03400da4 with catch @ 03400728 */
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(POIJDKLHHKO_TypeInfo,&local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_034007b4;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_12003,args,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

