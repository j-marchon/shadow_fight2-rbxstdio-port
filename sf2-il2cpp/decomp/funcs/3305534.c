// Nekki.SF2.Core.Quests.QuestsManager$$GetQuests @ RVA 0x3305534

System_Collections_Generic_List_FPPKHNNABAD__o *
Nekki_SF2_Core_Quests_QuestsManager__GetQuests
          (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method)

{
  bool bVar1;
  CNOGDCKPLMJ_o *__this_00;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *pSVar3;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *args;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  int32_t local_24;
  
  if ((DAT_04567759 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo);
    FUN_01bab630(&StringLiteral_15639);
    DAT_04567759 = 1;
  }
  if (HIHCBMNGGEO == 10) {
    __this_00 = (__this->fields).LJMFDFGELCO;
    if (__this_00 != (CNOGDCKPLMJ_o *)0x0) {
      pSVar2 = CNOGDCKPLMJ__BIPAMLPKNCP(__this_00,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    pSVar3 = (__this->fields).LEJLGCMCPLG;
    if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                   *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,HIHCBMNGGEO
                         ,
                         Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                        );
                    /* try { // try from 03405608 to 0350560f has its CatchHandler @ 03405b3c */
      pSVar3 = (__this->fields).LEJLGCMCPLG;
      if (bVar1) {
        if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                       *)0x0) {
          pSVar2 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
                   System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                              HIHCBMNGGEO,
                              Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                             );
          return pSVar2;
        }
      }
      else {
                    /* try { // try from 03405638 to 0350563f has its CatchHandler @ 03405b30 */
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
                    /* try { // try from 03405648 to 03505653 has its CatchHandler @ 03405b10 */
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
        if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                       *)0x0) {
                    /* try { // try from 03405678 to 0350567b has its CatchHandler @ 03405b0c */
          System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,HIHCBMNGGEO,
                     (Il2CppObject *)__this_01,
                     Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                    );
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* try { // try from 03405698 to 0350569b has its CatchHandler @ 03405b08 */
          pSVar4 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            pIVar5 = (Il2CppObject *)
                     (*(pSVar4->klass->vtable)._8_unknown.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._8_unknown.method);
            if (args != (System_Object_array *)0x0) {
                    /* try { // try from 034056c8 to 035056cb has its CatchHandler @ 03405ae0 */
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class),
                 lVar6 == 0)) {
LAB_0340579c:
                uVar7 = thunk_FUN_01be8e1c();
                    /* try { // try from 034057a0 to 035057cb has its CatchHandler @ 0340599c */
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar7,0);
              }
              if ((int)args->max_length != 0) {
                    /* try { // try from 034056d8 to 035056df has its CatchHandler @ 03405adc */
                args->m_Items[0] = pIVar5;
                thunk_FUN_01c20e04(args->m_Items,pIVar5);
                local_24 = HIHCBMNGGEO;
                    /* try { // try from 034056f4 to 035056fb has its CatchHandler @ 03405b28 */
                pIVar5 = (Il2CppObject *)
                         thunk_FUN_01bda448(KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo,&local_24);
                    /* try { // try from 03405708 to 0350570b has its CatchHandler @ 03405b24 */
                if ((pIVar5 != (Il2CppObject *)0x0) &&
                   (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class),
                   lVar6 == 0)) goto LAB_0340579c;
                if (1 < (uint)args->max_length) {
                  args->m_Items[1] = pIVar5;
                  thunk_FUN_01c20e04(args->m_Items + 1,pIVar5);
                    /* try { // try from 03405744 to 0350576b has its CatchHandler @ 034059a0 */
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UnityEngine_Debug__LogWarningFormat(StringLiteral_15639,args,(MethodInfo *)0x0);
                  pSVar3 = (__this->fields).LEJLGCMCPLG;
                  if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                                 *)0x0) {
                    pSVar2 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
                             System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        pSVar3,HIHCBMNGGEO,
                                        Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                                       );
                    return pSVar2;
                  }
                  goto LAB_03405794;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
        }
      }
    }
  }
LAB_03405794:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

