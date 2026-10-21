// Nekki.SF2.GUI.Dialogs.BaseDialog$$OnDestroy @ RVA 0x33AEFF4

void Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  System_Action_LBMOOFGGPEB__o **ppSVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Type_o *pSVar5;
  System_String_o *str1;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_00;
  System_Action_LBMOOFGGPEB__o *action;
  
                    /* try { // try from 034af000 to 035af007 has its CatchHandler @ 034af6e4 */
                    /* try { // try from 034af020 to 035af02b has its CatchHandler @ 034af6f0 */
  if ((DAT_04567d35 & 1) == 0) {
    FUN_01bab630(&System_Action<LBMOOFGGPEB>_TypeInfo);
                    /* try { // try from 034af040 to 035af047 has its CatchHandler @ 034af690 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1609);
                    /* try { // try from 034af058 to 035af05f has its CatchHandler @ 034af694 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1610);
                    /* try { // try from 034af060 to 035af07f has its CatchHandler @ 034af6a0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1611);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1612);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_BaseDialog_NPHBIMAFLMO__);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 034af090 to 035af09b has its CatchHandler @ 034af688 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
                    /* try { // try from 034af0ac to 035af0b3 has its CatchHandler @ 034af678 */
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
                    /* try { // try from 034af0c0 to 035af0c3 has its CatchHandler @ 034af680 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_PABELBJDFFA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo);
    DAT_04567d35 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
                    /* try { // try from 034af0fc to 035af123 has its CatchHandler @ 034af464 */
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields).DIKHJEINHID;
  if ((Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->static_fields->__9__57_0;
  if (action == (System_Action_LBMOOFGGPEB__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034af158 to 035af183 has its CatchHandler @ 034af460 */
    action = (System_Action_LBMOOFGGPEB__o *)thunk_FUN_01bda818(System_Action<LBMOOFGGPEB>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->static_fields->__9__57_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) {
                    /* try { // try from 034af1b8 to 035af1c3 has its CatchHandler @ 034af458 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
                    /* try { // try from 034af1d4 to 035af1e3 has its CatchHandler @ 034af450 */
    Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveAllEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
    (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034af1f4 to 035af1fb has its CatchHandler @ 034af410 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1609,(MethodInfo *)0x0)
    ;
                    /* try { // try from 034af204 to 035af20b has its CatchHandler @ 034af420 */
                    /* try { // try from 034af20c to 035af22b has its CatchHandler @ 034af454 */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1610,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 034af238 to 035af23f has its CatchHandler @ 034af448 */
    pSVar5 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
                    /* try { // try from 034af250 to 035af257 has its CatchHandler @ 034af41c */
                    /* try { // try from 034af258 to 035af263 has its CatchHandler @ 034af440 */
      str1 = (System_String_o *)
             (*(pSVar5->klass->vtable)._8_unknown.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._8_unknown.method);
                    /* try { // try from 034af274 to 035af27b has its CatchHandler @ 034af444 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034af284 to 035af28b has its CatchHandler @ 034af418 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1611,
                 (MethodInfo *)0x0);
                    /* try { // try from 034af28c to 035af297 has its CatchHandler @ 034af43c */
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034af2a4 to 035af2ab has its CatchHandler @ 034af414 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1612,
                 (MethodInfo *)0x0);
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat
                         (pSVar4,str1,str2,(__this->fields).DMNJBHNNEKI,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* try { // try from 034af2f8 to 035af31b has its CatchHandler @ 034af430 */
      UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

