// IGFGOIGJEFE$$MAHFCKJGBPP @ RVA 0x312732C

void IGFGOIGJEFE__MAHFCKJGBPP(IGFGOIGJEFE_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_MEMHEPBAJJA__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  FPPKHNNABAD_o *__this_02;
  LCKCDEKNLOA_o *__this_03;
  ACHLOMELAJE_o *pAVar4;
  System_String_o *message;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566661 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566661 = 1;
  }
                    /* try { // try from 032273ac to 033273af has its CatchHandler @ 03227bb4 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03227410 to 03327437 has its CatchHandler @ 03227cc0 */
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar4->fields).ECEOENIJAPJ,
     __this_00 != (System_Collections_Generic_List_MEMHEPBAJJA__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEMHEPBAJJA>_GetEnumerator__);
    iVar5 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_MoveNext__);
      pIVar2 = local_60.fields._current;
                    /* try { // try from 03227478 to 033274a3 has its CatchHandler @ 03227cb8 */
      if (!bVar3) break;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Inequality
                        ((__this->fields).super._LLOFHDDBKFD_k__BackingField,
                         local_60.fields._current[1].monitor,(MethodInfo *)0x0);
      if ((bVar3) && (pIVar2[1].klass != (Il2CppClass *)0x0)) {
        __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (__this_01 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                              (__this_01,pIVar2[1].monitor,(MethodInfo *)0x0);
                    /* try { // try from 032274c8 to 033274cb has its CatchHandler @ 03227bf0 */
                    /* try { // try from 032274cc to 033274d3 has its CatchHandler @ 03227c2c */
        if ((__this_02 != (FPPKHNNABAD_o *)0x0) &&
           (bVar3 = FPPKHNNABAD__KEAKFNDNBGH(__this_02,(MethodInfo *)0x0), !bVar3)) {
          message = (__this_02->fields)._COIPKAKHDFP_k__BackingField;
          iVar5 = iVar5 + 1;
                    /* try { // try from 032274dc to 033274e3 has its CatchHandler @ 03227c34 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 032274ec to 033274f3 has its CatchHandler @ 03227c30 */
          UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_Dispose__);
                    /* try { // try from 03227504 to 0332750b has its CatchHandler @ 03227c28 */
    if (iVar5 == 0) {
      if (DAT_04565e5a == '\0') {
                    /* try { // try from 03227544 to 03327553 has its CatchHandler @ 03227c24 */
        FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
        DAT_04565e5a = '\x01';
      }
                    /* try { // try from 03227554 to 0332755f has its CatchHandler @ 03227c1c */
      uVar1 = KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB;
                    /* try { // try from 0322756c to 033275cf has its CatchHandler @ 03227cd8 */
      if ((uVar1 < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0x905U) != 0)) {
        __this_03 = (__this->fields).EBAHJECPAHA;
        if (__this_03 == (LCKCDEKNLOA_o *)0x0) goto LAB_0322758c;
        goto LAB_03227510;
      }
    }
    __this_03 = (__this->fields).PGLINMCHKGC;
    if (__this_03 != (LCKCDEKNLOA_o *)0x0) {
LAB_03227510:
                    /* try { // try from 03227510 to 03327517 has its CatchHandler @ 03227c18 */
      LCKCDEKNLOA__MAHFCKJGBPP(__this_03,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* try { // try from 03227520 to 03327527 has its CatchHandler @ 03227c08 */
                    /* try { // try from 03227528 to 03327537 has its CatchHandler @ 03227c0c */
      return;
    }
  }
LAB_0322758c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

