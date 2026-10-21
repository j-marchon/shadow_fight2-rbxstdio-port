// TypeDefIndex 1818
// Namespace: 
// public class PJNPKJMMNDI
// Fields:
//   private List<JKHPOKJIMHC> KDIMDBHMBEM; // 0x10

// ===== public void OCGJPBAKEFP(List<JKHPOKJIMHC> AHEFOIOKDOK)  [RVA 0x321A894]
// PJNPKJMMNDI$$OCGJPBAKEFP @ RVA 0x321A894

void PJNPKJMMNDI__OCGJPBAKEFP
               (PJNPKJMMNDI_o *__this,System_Collections_Generic_List_JKHPOKJIMHC__o *AHEFOIOKDOK,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04566efb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JKHPOKJIMHC>_AddRange__);
    DAT_04566efb = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)AHEFOIOKDOK,
               Method_System_Collections_Generic_List<JKHPOKJIMHC>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x321A8EC]
// PJNPKJMMNDI$$.ctor @ RVA 0x321A8EC

void PJNPKJMMNDI___ctor(PJNPKJMMNDI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566efc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JKHPOKJIMHC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JKHPOKJIMHC>_TypeInfo);
    DAT_04566efc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JKHPOKJIMHC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<JKHPOKJIMHC>__ctor__);
  (__this->fields).KDIMDBHMBEM = (System_Collections_Generic_List_JKHPOKJIMHC__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void AOHPFMNMABI(JKHPOKJIMHC PFDEAPMMFAP)  [RVA 0x321A974]
// PJNPKJMMNDI$$AOHPFMNMABI @ RVA 0x321A974

void PJNPKJMMNDI__AOHPFMNMABI(PJNPKJMMNDI_o *__this,JKHPOKJIMHC_o *PFDEAPMMFAP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  
  if ((DAT_04566efd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JKHPOKJIMHC>_Add__);
    DAT_04566efd = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<JKHPOKJIMHC>_Add__;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)PFDEAPMMFAP;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,PFDEAPMMFAP);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)PFDEAPMMFAP,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool JOLFKDDINGF(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x321AA20]
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

