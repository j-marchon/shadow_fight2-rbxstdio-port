// Nekki.SF2.GUI.Dialogs.BaseDialog$$OnClose @ RVA 0x33AE6B0

void Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  BackKeyManager_o *__this_01;
  UnityEngine_Object_o *pUVar2;
  
                    /* catch() { ... } // from try @ 034ae68c with catch @ 034ae6b0 */
                    /* catch() { ... } // from try @ 034ae5c0 with catch @ 034ae6b4 */
                    /* catch() { ... } // from try @ 034ae594 with catch @ 034ae6b8 */
                    /* catch() { ... } // from try @ 034ae560 with catch @ 034ae6bc */
                    /* catch() { ... } // from try @ 034ae51c with catch @ 034ae6c0 */
                    /* catch() { ... } // from try @ 034ae688 with catch @ 034ae6c4 */
                    /* catch() { ... } // from try @ 034ae684 with catch @ 034ae6c8 */
  if ((DAT_04567d30 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ae680 with catch @ 034ae6cc */
                    /* catch() { ... } // from try @ 034ae67c with catch @ 034ae6d0 */
                    /* catch() { ... } // from try @ 034ae59c with catch @ 034ae6d4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 034ae568 with catch @ 034ae6d8 */
                    /* catch() { ... } // from try @ 034ae584 with catch @ 034ae6dc */
                    /* catch() { ... } // from try @ 034ae550 with catch @ 034ae6e0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
                    /* catch() { ... } // from try @ 034ae4f0 with catch @ 034ae6e4 */
                    /* catch() { ... } // from try @ 034ae678 with catch @ 034ae6e8 */
    DAT_04567d30 = 1;
  }
                    /* catch() { ... } // from try @ 034ae524 with catch @ 034ae6ec */
                    /* catch() { ... } // from try @ 034ae4cc with catch @ 034ae6f0 */
  if ((__this->fields).ELKILAILDGG == false) {
                    /* catch() { ... } // from try @ 034ae4d8 with catch @ 034ae6f4 */
                    /* catch() { ... } // from try @ 034ae4b0 with catch @ 034ae6f8 */
    (__this->fields).ELKILAILDGG = true;
                    /* catch() { ... } // from try @ 034ae670 with catch @ 034ae6fc */
                    /* catch() { ... } // from try @ 034ae450 with catch @ 034ae700 */
                    /* catch() { ... } // from try @ 034ae3f4 with catch @ 034ae704 */
    Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,IMMNELPBGIF,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
  }
                    /* try { // try from 034ae71c to 035ae71f has its CatchHandler @ 034ae730 */
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__LDLLGJNAKKP(__this_00,__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ae71c with catch @ 034ae730 */
    __this_01 = BackKeyManager__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (BackKeyManager_o *)0x0) {
                    /* try { // try from 034ae740 to 035ae7af has its CatchHandler @ 034ae7c4 */
      BackKeyManager__RemoveBackKeyController(__this_01,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
      if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
                    /* try { // try from 034ae7c8 to 035aeb1b has its CatchHandler @ 034ae7c8
                       catch() { ... } // from try @ 034ae7c8 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af408 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af664 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af734 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af884 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af8b0 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af8c0 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034afa0c with catch @ 034ae7c8 */
          return;
        }
      }
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ae7b0 to 035ae7bb has its CatchHandler @ 034ae264 */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
                    /* try { // try from 034ae7bc to 035ae7c3 has its CatchHandler @ 034ae7c4 */
                    /* catch() { ... } // from try @ 034ae740 with catch @ 034ae7c4
                       catch() { ... } // from try @ 034ae7bc with catch @ 034ae7c4 */
      UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

