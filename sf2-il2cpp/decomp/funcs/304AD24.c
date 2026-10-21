// EGMONPGHHDP$$JEPAEBOBBMA @ RVA 0x304AD24

int32_t EGMONPGHHDP__JEPAEBOBBMA
                  (EGMONPGHHDP_o *__this,bool ABCLFEHMBJD,JMDPBFOCHHP_CKEMIAEPGKD_o *CLDEGLBDGGE,
                  MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_CKEMIAEPGKD_o *__this_00;
  KEGDLHPEJBG_o *pKVar2;
  System_Collections_BitArray_o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *__this_02;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  int index;
  undefined1 auVar4 [16];
  
  method_00 = (MethodInfo *)(ulong)ABCLFEHMBJD;
  __this_00 = (JMDPBFOCHHP_CKEMIAEPGKD_o *)__this;
  if ((DAT_04565e12 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    auVar4 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                         );
    method_00 = auVar4._8_8_;
    __this_00 = auVar4._0_8_;
    DAT_04565e12 = 1;
  }
  if (CLDEGLBDGGE == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
    __this_00 = EGMONPGHHDP__OKBKFJKEAAG(__this,method_00);
    method_00 = extraout_x1;
    CLDEGLBDGGE = __this_00;
  }
  pKVar2 = EGMONPGHHDP__NJNOLNHFOPK((EGMONPGHHDP_o *)__this_00,method_00);
  if ((CLDEGLBDGGE == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) || (pKVar2 == (KEGDLHPEJBG_o *)0x0)) {
    return -1;
  }
  __this_01 = (__this->fields)._MLMHDKDJJFK_k__BackingField;
  if (__this_01 != (System_Collections_BitArray_o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields).m_length <= index) {
        return -1;
      }
      bVar1 = System_Collections_BitArray__get_Item(__this_01,index,(MethodInfo *)0x0);
      if (!bVar1) {
        __this_02 = (CLDEGLBDGGE->fields).GPNNHMIJLGL;
        if (__this_02 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) break;
        if ((__this_02->fields)._size <= index) {
          return -1;
        }
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,index,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                           );
        if (pIVar3 == (Il2CppObject *)0x0) break;
        if (*(char *)&pIVar3[2].monitor == '\0' || ABCLFEHMBJD) {
          return index;
        }
      }
      __this_01 = (__this->fields)._MLMHDKDJJFK_k__BackingField;
      index = index + 1;
    } while (__this_01 != (System_Collections_BitArray_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

