// ACHLOMELAJE$$JGHPOCNCLBL @ RVA 0x305FF38

System_Collections_Generic_List_int__o *
ACHLOMELAJE__JGHPOCNCLBL(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_List_int__o *__this_00;
  System_String_array *pSVar4;
  MethodInfo *in_x2;
  ulong uVar5;
  System_Int32_array *pSVar6;
  ulong uVar7;
  int32_t local_34;
  
  if ((DAT_04565eba & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&StringLiteral_14268);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565eba = 1;
  }
  local_34 = 0;
  LBJNDMNEJJB = ACHLOMELAJE__EHEEJLHPICC(__this,StringLiteral_14268,in_x2);
  CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((CJNHFNHJHPE == (System_String_o *)0x0) ||
       (pSVar4 = System_String__Split(CJNHFNHJHPE,0x2c,0,(MethodInfo *)0x0),
       pSVar4 == (System_String_array *)0x0)) {
LAB_031600e4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar7 = 0;
      uVar5 = pSVar4->max_length & 0xffffffff;
      do {
        if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        bVar3 = System_Int32__TryParse(pSVar4->m_Items[uVar7],&local_34,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_031600e4;
          pSVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar6 == (System_Int32_array *)0x0) goto LAB_031600e4;
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = local_34;
          }
          else {
            System_Collections_Generic_List<int>__AddWithResize
                      (__this_00,local_34,
                       *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar1;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
  }
  return __this_00;
}

