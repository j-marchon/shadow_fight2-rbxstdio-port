// EGMONPGHHDP$$LKMGFEDIOAC @ RVA 0x3049898

bool EGMONPGHHDP__LKMGFEDIOAC
               (EGMONPGHHDP_o *__this,int32_t JLAFGLDIFOC,int32_t BHFLMNBKDAA,bool DIGCHEFGCAA,
               MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_CKEMIAEPGKD_o *__this_00;
  KEGDLHPEJBG_o *pKVar2;
  System_Collections_BitArray_o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)JLAFGLDIFOC;
  if ((DAT_04565e0e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    DAT_04565e0e = 1;
    method_00 = extraout_x1;
  }
  __this_00 = EGMONPGHHDP__OKBKFJKEAAG(__this,method_00);
  pKVar2 = EGMONPGHHDP__NJNOLNHFOPK((EGMONPGHHDP_o *)__this_00,method_01);
  if ((__this_00 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) || (pKVar2 == (KEGDLHPEJBG_o *)0x0)) {
    return false;
  }
  __this_01 = (__this->fields)._MLMHDKDJJFK_k__BackingField;
  if (__this_01 != (System_Collections_BitArray_o *)0x0) {
    bVar1 = System_Collections_BitArray__get_Item(__this_01,JLAFGLDIFOC,(MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
    pSVar3 = (__this_00->fields).GPNNHMIJLGL;
    if ((pSVar3 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,JLAFGLDIFOC,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                           ), pIVar4 != (Il2CppObject *)0x0)) {
      if ((long)BHFLMNBKDAA < (long)(ulong)*(uint *)((long)&pIVar4[1].klass + 4)) {
        return false;
      }
      pSVar3 = (__this_00->fields).GPNNHMIJLGL;
      if ((pSVar3 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) &&
         (pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,JLAFGLDIFOC,
                              Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                             ), pIVar4 != (Il2CppObject *)0x0)) {
        return *(char *)&pIVar4[2].monitor != '\x01' || DIGCHEFGCAA;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

