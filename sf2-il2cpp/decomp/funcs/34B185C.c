// MBDJMJLHFOO$$IDJNOIMDGKJ @ RVA 0x34B185C

void MBDJMJLHFOO__IDJNOIMDGKJ
               (MBDJMJLHFOO_o *__this,UnityEngine_Vector3_array *OCMMDIHLKMH,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_00;
  Il2CppObject *pIVar3;
  CNDPAJOLKFN_o *__this_01;
  int iVar4;
  MethodInfo *in_x3;
  ulong uVar5;
  float *pfVar6;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  
  if ((DAT_04568566 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568566 = 1;
  }
  __this_00 = (__this->fields).DGPKPHAHOJP;
  iVar4 = (__this->fields).MONBPDGKCOM + 1;
  (__this->fields).MONBPDGKCOM = iVar4;
  if (__this_00 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
  goto LAB_035b19b4;
  if ((__this_00->fields)._size < iVar4) {
    if (OCMMDIHLKMH == (UnityEngine_Vector3_array *)0x0) goto LAB_035b19b4;
    MBDJMJLHFOO__LOGLJOCPFCN(__this,1,(int32_t)OCMMDIHLKMH->max_length,in_x3);
    __this_00 = (__this->fields).DGPKPHAHOJP;
    if (__this_00 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
    goto LAB_035b19b4;
  }
  pIVar3 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,
                      (__this->fields).MONBPDGKCOM + -1,
                      Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
  if ((pIVar3 != (Il2CppObject *)0x0) && (OCMMDIHLKMH != (UnityEngine_Vector3_array *)0x0)) {
    iVar4 = (int)OCMMDIHLKMH->max_length;
    if (*(int *)&pIVar3[1].monitor != iVar4) {
      if (*(int *)&pIVar3[1].monitor < iVar4) {
        DJNBJHPDKDP__LJCDLMMMOGD<object>
                  ((System_Collections_Generic_List_T__o *)pIVar3[1].klass,iVar4,
                   Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
        iVar4 = (int)OCMMDIHLKMH->max_length;
      }
      *(int *)&pIVar3[1].monitor = iVar4;
    }
    if (0 < iVar4) {
      uVar5 = 0;
      pfVar6 = &OCMMDIHLKMH->m_Items[0].fields.z;
      do {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto LAB_035b19b4;
        __this_01 = (CNDPAJOLKFN_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pIVar3[1].klass,
                               (int32_t)uVar5,
                               Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        if ((uint)OCMMDIHLKMH->max_length <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_01 == (CNDPAJOLKFN_o *)0x0) goto LAB_035b19b4;
        PHCOHKNFGLE.fields.z = *pfVar6;
        uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar6 + -2))->x;
        uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar6 + -2))->y;
        PHCOHKNFGLE.fields.y = (float)uVar2;
        PHCOHKNFGLE.fields.x = (float)uVar1;
        CNDPAJOLKFN__FOOHBJNHOKK(__this_01,PHCOHKNFGLE,(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 3;
      } while ((long)uVar5 < (long)(int)OCMMDIHLKMH->max_length);
    }
    return;
  }
LAB_035b19b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

