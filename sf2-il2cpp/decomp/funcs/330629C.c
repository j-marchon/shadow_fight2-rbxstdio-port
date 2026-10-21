// Nekki.SF2.Core.Quests.QuestsManager$$KNCLEHBPCIN @ RVA 0x330629C

void Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  FPPKHNNABAD_o *__this_00;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  System_Object_array *args;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  System_String_o **ppSVar7;
  System_String_o *pSVar8;
  
  if ((DAT_04567757 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034062d0 to 035062f7 has its CatchHandler @ 03406514 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PHBFKBEHGIK__);
    FUN_01bab630(&StringLiteral_15640);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567757 = 1;
  }
                    /* try { // try from 0340632c to 03506357 has its CatchHandler @ 03406510 */
  pSVar2 = (__this->fields).GOAJEJNPDFA;
  if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
LAB_03406528:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (pSVar2->fields)._size) {
    (__this->fields)._isRunActions = true;
    (__this->fields).HFOJKJFILDB = false;
    do {
      __this_00 = (FPPKHNNABAD_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,0,
                             Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
      if ((__this_00 != (FPPKHNNABAD_o *)0x0) &&
         (bVar1 = FPPKHNNABAD__AAOKDJMOBPE(__this_00,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 034063a8 to 035063af has its CatchHandler @ 03406508 */
                    /* try { // try from 034063b0 to 035063bb has its CatchHandler @ 0340650c */
        CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                      thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
                    /* try { // try from 034063d0 to 035063d7 has its CatchHandler @ 034064f4 */
        System_Action<object>___ctor();
        FPPKHNNABAD__EIAAJACOKDP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 034063e8 to 035063ef has its CatchHandler @ 034064f0 */
        FPPKHNNABAD__IKDPMKOIDMP(__this_00,(__this->fields).QuestParameters,false,(MethodInfo *)0x0)
        ;
        ppSVar7 = &(__this->fields).CurrentQuestName;
                    /* try { // try from 034063fc to 03506403 has its CatchHandler @ 034064ec */
        *ppSVar7 = (__this_00->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04(ppSVar7);
                    /* try { // try from 03406410 to 03506417 has its CatchHandler @ 034064e8 */
                    /* try { // try from 03406418 to 035064c3 has its CatchHandler @ 034060d8 */
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        pSVar3 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
        if ((pSVar3 == (System_Type_o *)0x0) ||
           (pIVar4 = (Il2CppObject *)
                     (*(pSVar3->klass->vtable)._8_unknown.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._8_unknown.method),
           args == (System_Object_array *)0x0)) goto LAB_03406528;
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
LAB_03406530:
                    /* try { // try from 03406530 to 03506533 has its CatchHandler @ 03406540 */
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(args->m_Items,pIVar4);
          pSVar8 = *ppSVar7;
          if ((pSVar8 != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) goto LAB_03406530;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)pSVar8;
            thunk_FUN_01c20e04(args->m_Items + 1,pSVar8);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034064c4 to 035064cb has its CatchHandler @ 03406518 */
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 034064cc to 035064cf has its CatchHandler @ 03406500 */
                    /* try { // try from 034064d0 to 035064d3 has its CatchHandler @ 034064fc */
                    /* try { // try from 034064d4 to 035064d7 has its CatchHandler @ 034060d8 */
                    /* try { // try from 034064d8 to 035064db has its CatchHandler @ 034064f8 */
                    /* try { // try from 034064dc to 035064e3 has its CatchHandler @ 034060d8 */
            UnityEngine_Debug__LogFormat(StringLiteral_15640,args,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).GOAJEJNPDFA;
                    /* try { // try from 034064e4 to 035064e7 has its CatchHandler @ 034064f4 */
            if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_03406528;
            break;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar2 = (__this->fields).GOAJEJNPDFA;
      if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_03406528;
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,0,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
      pSVar2 = (__this->fields).GOAJEJNPDFA;
      if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_03406528;
                    /* try { // try from 03406398 to 0350639f has its CatchHandler @ 03406504 */
    } while (0 < (pSVar2->fields)._size);
                    /* catch() { ... } // from try @ 03406410 with catch @ 034064e8
                       try { // try from 034064e8 to 0350652f has its CatchHandler @ 034060d8 */
                    /* catch() { ... } // from try @ 034063fc with catch @ 034064ec */
    if ((pSVar2->fields)._size == 0) {
                    /* catch() { ... } // from try @ 034064cc with catch @ 03406500 */
      (__this->fields)._isRunActions = false;
      ppSVar7 = &(__this->fields).CurrentQuestName;
                    /* catch() { ... } // from try @ 03406398 with catch @ 03406504 */
                    /* catch() { ... } // from try @ 034063a8 with catch @ 03406508 */
                    /* catch() { ... } // from try @ 034063b0 with catch @ 0340650c */
                    /* catch() { ... } // from try @ 0340632c with catch @ 03406510 */
                    /* catch() { ... } // from try @ 034062d0 with catch @ 03406514 */
      *ppSVar7 = StringLiteral_1;
                    /* catch() { ... } // from try @ 034064c4 with catch @ 03406518 */
      thunk_FUN_01c20e04(ppSVar7);
      return;
    }
  }
                    /* catch() { ... } // from try @ 034063e8 with catch @ 034064f0 */
                    /* catch() { ... } // from try @ 034063d0 with catch @ 034064f4
                       catch() { ... } // from try @ 034064e4 with catch @ 034064f4 */
                    /* catch() { ... } // from try @ 034064d8 with catch @ 034064f8 */
                    /* catch() { ... } // from try @ 034064d0 with catch @ 034064fc */
  return;
}

