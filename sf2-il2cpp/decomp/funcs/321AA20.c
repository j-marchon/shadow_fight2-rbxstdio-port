// PJNPKJMMNDI$$JOLFKDDINGF @ RVA 0x321AA20

bool PJNPKJMMNDI__JOLFKDDINGF(PJNPKJMMNDI_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  int index;
  
  if ((DAT_04566efe & 1) == 0) {
    FUN_01bab630(&JKHPOKJIMHC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JKHPOKJIMHC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JKHPOKJIMHC>_get_Item__);
    DAT_04566efe = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_0331ab1c:
        return iVar1 <= index;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,index,
                          Method_System_Collections_Generic_List<JKHPOKJIMHC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      pIVar5 = pIVar3->klass;
      uVar2._0_1_ = (pIVar5->_2).rank;
      uVar2._1_1_ = (pIVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar2;
      if (uVar6 != 0) {
        piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)JKHPOKJIMHC_TypeInfo) {
            pVVar4 = pIVar5->vtable + *piVar7;
            goto LAB_0331aaf8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,JKHPOKJIMHC_TypeInfo,0);
LAB_0331aaf8:
      uVar6 = (*pVVar4->methodPtr)(pIVar3,DBIAAJNKHLH,pVVar4->method);
      if ((uVar6 & 1) == 0) goto LAB_0331ab1c;
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).KDIMDBHMBEM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

