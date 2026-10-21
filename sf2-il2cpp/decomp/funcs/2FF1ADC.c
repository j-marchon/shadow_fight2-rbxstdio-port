// HintButton$$LMONINNGKAP @ RVA 0x2FF1ADC

bool HintButton__LMONINNGKAP(HintButton_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_T__o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_HintUI__o *pSVar5;
  int index;
  
  if ((DAT_04565a77 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_get_Item__);
    DAT_04565a77 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
  if ((__this_00 != (System_Collections_Generic_List_T__o *)0x0) &&
     (pSVar5 = (__this->fields)._Hints, pSVar5 != (System_Collections_Generic_List_HintUI__o *)0x0))
  {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 != (pSVar5->fields)._size) {
      return true;
    }
    if (iVar1 < 1) {
      return false;
    }
    index = 0;
    do {
      iVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                        (__this_00,index,
                         Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
      pSVar5 = (__this->fields)._Hints;
      if ((pSVar5 == (System_Collections_Generic_List_HintUI__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,index,
                              Method_System_Collections_Generic_List<HintUI>_get_Item__),
         pIVar4 == (Il2CppObject *)0x0)) break;
      if ((iVar1 + -1 == index) || (iVar3 != *(int *)&pIVar4[2].klass)) {
        return iVar3 != *(int *)&pIVar4[2].klass;
      }
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_T__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

