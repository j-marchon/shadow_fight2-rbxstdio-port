// Nekki.SF2.Core.Quests.QuestsManager$$RunQuestByName_DEBUG @ RVA 0x3306A44

void Nekki_SF2_Core_Quests_QuestsManager__RunQuestByName_DEBUG
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  FPPKHNNABAD_o *NDBPOFMECGL;
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
                    /* try { // try from 03406a4c to 03506a4f has its CatchHandler @ 03406a8c */
                    /* try { // try from 03406a50 to 03506a5f has its CatchHandler @ 03406a90 */
  if ((DAT_0456775c & 1) == 0) {
                    /* try { // try from 03406a60 to 03506a83 has its CatchHandler @ 034068ec */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9500);
                    /* try { // try from 03406a84 to 03506a87 has its CatchHandler @ 03406a98 */
                    /* try { // try from 03406a88 to 03506ab3 has its CatchHandler @ 034068ec */
    DAT_0456775c = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a4c with catch @ 03406a8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a50 with catch @ 03406a90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a34 with catch @ 03406a94
                        */
  NDBPOFMECGL = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName(__this,HBDNGIDONHG,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a84 with catch @ 03406a98
                        */
  if (NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a10 with catch @ 03406a9c
                        */
    Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack(__this,NDBPOFMECGL,false,in_x3);
    if ((__this->fields)._isRunActions != false) {
                    /* try { // try from 03406ab4 to 03506ab7 has its CatchHandler @ 03406ad8 */
                    /* try { // try from 03406ab8 to 03506adf has its CatchHandler @ 034068ec */
      return;
    }
    Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN(__this,method_00);
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03406ab4 with catch @ 03406ad8 */
                    /* try { // try from 03406ae0 to 03506ae7 has its CatchHandler @ 03406afc */
                    /* try { // try from 03406ae8 to 03506af3 has its CatchHandler @ 034068ec */
  if ((HBDNGIDONHG != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(HBDNGIDONHG,(((args->obj).klass)->_1).element_class), lVar1 == 0))
  {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
                    /* try { // try from 03406af4 to 03506afb has its CatchHandler @ 03406afc */
  if ((int)args->max_length != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03406ae0 with catch @ 03406afc
                       catch(type#2 @ 00000000) { ... } // from try @ 03406af4 with catch @ 03406afc
                        */
    args->m_Items[0] = (Il2CppObject *)HBDNGIDONHG;
    thunk_FUN_01c20e04(args->m_Items,HBDNGIDONHG);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_9500,args,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

