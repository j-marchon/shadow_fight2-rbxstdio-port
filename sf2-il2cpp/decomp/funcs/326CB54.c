// NLAJHFAOEDB$$DGDBKPIHGNH @ RVA 0x326CB54

void NLAJHFAOEDB__DGDBKPIHGNH(NLAJHFAOEDB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  FPPKHNNABAD_o *__this_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  
                    /* try { // try from 0336cb54 to 0346cb93 has its CatchHandler @ 0336c894 */
                    /* catch() { ... } // from try @ 0336cae8 with catch @ 0336cb58 */
                    /* catch() { ... } // from try @ 0336cb14 with catch @ 0336cb5c */
                    /* catch() { ... } // from try @ 0336cb0c with catch @ 0336cb60 */
                    /* catch() { ... } // from try @ 0336caf8 with catch @ 0336cb64 */
                    /* catch() { ... } // from try @ 0336c990 with catch @ 0336cb68 */
                    /* catch() { ... } // from try @ 0336cb50 with catch @ 0336cb6c */
  if ((DAT_045671f3 & 1) == 0) {
                    /* catch() { ... } // from try @ 0336cb4c with catch @ 0336cb70 */
                    /* catch() { ... } // from try @ 0336cb48 with catch @ 0336cb74 */
                    /* catch() { ... } // from try @ 0336c980 with catch @ 0336cb78 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 0336c95c with catch @ 0336cb7c */
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4174);
                    /* try { // try from 0336cb94 to 0346cb97 has its CatchHandler @ 0336cbb8 */
                    /* try { // try from 0336cb98 to 0346cbbf has its CatchHandler @ 0336c894 */
    DAT_045671f3 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                          (pNVar2,(__this->fields).BNDDPDNJAGJ,(MethodInfo *)0x0);
    if (__this_00 == (FPPKHNNABAD_o *)0x0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_0336cc80;
      pSVar5 = (__this->fields).BNDDPDNJAGJ;
      if ((pSVar5 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pSVar5;
      thunk_FUN_01c20e04(args->m_Items,pSVar5);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_4174,args,(MethodInfo *)0x0);
    }
    else {
                    /* catch() { ... } // from try @ 0336cb94 with catch @ 0336cbb8 */
                    /* try { // try from 0336cbc0 to 0346cbc7 has its CatchHandler @ 0336cbdc */
      bVar1 = FPPKHNNABAD__DGCODECJJCC(__this_00,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* try { // try from 0336cbc8 to 0346cbd3 has its CatchHandler @ 0336c894 */
      if (bVar1) {
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 0336cbd4 to 0346cbdb has its CatchHandler @ 0336cbdc */
        if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0336cc80;
                    /* catch() { ... } // from try @ 0336cbc0 with catch @ 0336cbdc
                       catch() { ... } // from try @ 0336cbd4 with catch @ 0336cbdc */
        Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack
                  (pNVar2,__this_00,false,(MethodInfo *)0x0);
      }
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0336cc80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

