// DKEOKAONIIB$$JDOKHDBJFIO @ RVA 0x32EC780

void DKEOKAONIIB__JDOKHDBJFIO
               (System_String_o *IMJHEANBDDA,System_String_o *DFEGBKMFBMM,
               System_String_o *LBKOHHHPNIP,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_String_o **ppSVar3;
  DKEOKAONIIB_StaticFields *pDVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_string__o *__this;
  
  if ((DAT_04567643 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&StringLiteral_3429);
    DAT_04567643 = 1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar4->LDBHFHDLBND == false) {
    return;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
  }
  if (pDVar4->GIGIAMDJECC != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
    }
    __this = pDVar4->OBLIJEFDJGN;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      length = (__this->fields)._size;
      (__this->fields)._size = 0;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(__this->fields)._items,0,length,(MethodInfo *)0x0);
        __this = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
      }
      item = System_String__Format
                       (StringLiteral_3429,(Il2CppObject *)IMJHEANBDDA,(Il2CppObject *)DFEGBKMFBMM,
                        (Il2CppObject *)LBKOHHHPNIP,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar5->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_033ec900;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033ec900:
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar3 = &DKEOKAONIIB_TypeInfo->static_fields->OFEBDKNHKOJ;
  *ppSVar3 = IMJHEANBDDA;
  thunk_FUN_01c20e04(ppSVar3,IMJHEANBDDA);
  ppSVar3 = &DKEOKAONIIB_TypeInfo->static_fields->KNFHPILPMAL;
  *ppSVar3 = DFEGBKMFBMM;
  thunk_FUN_01c20e04(ppSVar3,DFEGBKMFBMM);
  return;
}

