// NKOIBKNPICN$$OLKAFFDIJLH @ RVA 0x34D7474

System_String_o * NKOIBKNPICN__OLKAFFDIJLH(NKOIBKNPICN_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 *puVar6;
  int iVar7;
  
  if ((DAT_045686e3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    FUN_01bab630(&StringLiteral_230);
    FUN_01bab630(&StringLiteral_273);
    FUN_01bab630(&StringLiteral_3552);
    FUN_01bab630(&StringLiteral_11820);
    FUN_01bab630(&StringLiteral_305);
    FUN_01bab630(&StringLiteral_1);
    DAT_045686e3 = 1;
  }
  pSVar3 = (__this->fields).OOIGOEAHPMA;
  if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    pSVar5 = StringLiteral_1;
    if (iVar1 < 1) {
LAB_035d7588:
      pSVar5 = System_String__Concat(pSVar5,StringLiteral_273,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).KJNPENJKBKD;
      if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar1 = (pSVar3->fields)._size;
        if (iVar1 < 1) {
LAB_035d7618:
          pSVar5 = System_String__Concat(pSVar5,StringLiteral_305,(MethodInfo *)0x0);
          iVar1 = (__this->fields).BHJAGFIAEAA;
          if (iVar1 == 0) {
            puVar6 = &StringLiteral_3552;
          }
          else {
            if (iVar1 != 1) {
              return pSVar5;
            }
            puVar6 = &StringLiteral_11820;
          }
          pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar6,(MethodInfo *)0x0);
          return pSVar5;
        }
        iVar7 = 0;
        do {
          iVar2 = System_Collections_Generic_List<int>__get_Item
                            (pSVar3,iVar7,Method_System_Collections_Generic_List<int>_get_Item__);
          pSVar4 = NKOIBKNPICN__JKNFAAKALMN(iVar2,method_01);
          pSVar5 = System_String__Concat(pSVar5,pSVar4,(MethodInfo *)0x0);
          if (iVar7 < iVar1 + -1) {
            pSVar5 = System_String__Concat(pSVar5,StringLiteral_230,(MethodInfo *)0x0);
          }
          iVar7 = iVar7 + 1;
          if (iVar1 == iVar7) goto LAB_035d7618;
          pSVar3 = (__this->fields).KJNPENJKBKD;
        } while (pSVar3 != (System_Collections_Generic_List_int__o *)0x0);
      }
    }
    else {
      iVar7 = 0;
      do {
        iVar2 = System_Collections_Generic_List<int>__get_Item
                          (pSVar3,iVar7,Method_System_Collections_Generic_List<int>_get_Item__);
        pSVar4 = NKOIBKNPICN__JKNFAAKALMN(iVar2,method_00);
        pSVar5 = System_String__Concat(pSVar5,pSVar4,(MethodInfo *)0x0);
        if (iVar7 < iVar1 + -1) {
          pSVar5 = System_String__Concat(pSVar5,StringLiteral_230,(MethodInfo *)0x0);
        }
        iVar7 = iVar7 + 1;
        if (iVar1 == iVar7) goto LAB_035d7588;
        pSVar3 = (__this->fields).OOIGOEAHPMA;
      } while (pSVar3 != (System_Collections_Generic_List_int__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

