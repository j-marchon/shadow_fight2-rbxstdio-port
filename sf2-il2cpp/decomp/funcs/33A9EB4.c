// NKDMOOEFPHJ$$HHGPIDALLPC @ RVA 0x33A9EB4

void NKDMOOEFPHJ__HHGPIDALLPC
               (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,System_String_o *BACEBCCDLFE,
               float *DFIBGGDJPLM,float *LINBBAKAFCP,float *AHEDHNBDHFD,MethodInfo *method)

{
  int32_t length;
  ECENNHNBAME_o *NLEBDPHNIDI;
  int index;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar1;
  float local_54;
  float local_48 [2];
  
  if ((DAT_04567d08 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    DAT_04567d08 = 1;
  }
  *DFIBGGDJPLM = 0.0;
  *LINBBAKAFCP = 0.0;
  pSVar1 = (__this->fields).MJFICLOHJEL;
  if (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).MJFICLOHJEL;
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDHBHPILNMA__CADFKPKODCI(BACEBCCDLFE,pSVar1,(MethodInfo *)0x0);
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_54 = 0.0;
    pSVar1 = (__this->fields).MJFICLOHJEL;
    if (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      index = 0;
      do {
        if ((pSVar1->fields)._size <= index) {
          return;
        }
        NLEBDPHNIDI = (ECENNHNBAME_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                 Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
        NKDMOOEFPHJ__HHGPIDALLPC
                  (__this,KPGNMOKKJNI,NLEBDPHNIDI,local_48 + 1,local_48,&local_54,method);
        index = index + 1;
        *DFIBGGDJPLM = *DFIBGGDJPLM + local_48[1];
        *LINBBAKAFCP = *LINBBAKAFCP + local_48[0];
        *AHEDHNBDHFD = *AHEDHNBDHFD + local_54;
        pSVar1 = (__this->fields).MJFICLOHJEL;
      } while (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

