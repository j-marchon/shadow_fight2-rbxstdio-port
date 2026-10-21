// IPCACEBFONO$$BBKKFLFMBAB @ RVA 0x34E2390

void IPCACEBFONO__BBKKFLFMBAB(IPCACEBFONO_o *__this,int32_t MFDCCBAJNIO,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  bool bVar3;
  IPCACEBFONO_ONKMJNMABJI_o *pIVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  MethodInfo *method_00;
  NKOIBKNPICN_o *pNVar6;
  System_Int32_array *pSVar7;
  
  if ((DAT_0456873e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    DAT_0456873e = 1;
  }
  pIVar4 = IPCACEBFONO__AJDGKKOPLIM(__this,MFDCCBAJNIO,method);
  if (pIVar4 == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) {
    return;
  }
  (pIVar4->fields).BCHBDELEFGK = false;
  pNVar6 = (__this->fields).MAABMIGPEIL;
  if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
     (pSVar5 = (pNVar6->fields).OOIGOEAHPMA, pSVar5 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    bVar3 = System_Collections_Generic_List<int>__Contains
                      (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                       Method_System_Collections_Generic_List<int>_Contains__);
    if (bVar3) {
      return;
    }
    pNVar6 = (__this->fields).MAABMIGPEIL;
    if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
       (pSVar5 = (pNVar6->fields).KJNPENJKBKD,
       pSVar5 != (System_Collections_Generic_List_int__o *)0x0)) {
      System_Collections_Generic_List<int>__IndexOf
                (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                 Method_System_Collections_Generic_List<int>_IndexOf__);
      pNVar6 = (__this->fields).MAABMIGPEIL;
      if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
         (pSVar5 = (pNVar6->fields).KJNPENJKBKD,
         pSVar5 != (System_Collections_Generic_List_int__o *)0x0)) {
        bVar3 = System_Collections_Generic_List<int>__Contains
                          (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                           Method_System_Collections_Generic_List<int>_Contains__);
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        if (!bVar3) {
          return;
        }
        pNVar6 = (__this->fields).MAABMIGPEIL;
        if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
           (pSVar5 = (pNVar6->fields).JCJPICMGIHE,
           pSVar5 != (System_Collections_Generic_List_int__o *)0x0)) {
          item = (pIVar4->fields).HLFBMBHOPMI;
          pSVar7 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pSVar7 != (System_Int32_array *)0x0) {
            uVar1 = (pSVar5->fields)._size;
            if (uVar1 < (uint)pSVar7->max_length) {
              (pSVar5->fields)._size = uVar1 + 1;
              pSVar7->m_Items[(int)uVar1] = item;
            }
            else {
              System_Collections_Generic_List<int>__AddWithResize
                        (pSVar5,item,
                         *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              pNVar6 = (__this->fields).MAABMIGPEIL;
              if (pNVar6 == (NKOIBKNPICN_o *)0x0) goto LAB_035e2510;
            }
            pSVar5 = (pNVar6->fields).KJNPENJKBKD;
            if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
              System_Collections_Generic_List<int>__Remove
                        (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                         Method_System_Collections_Generic_List<int>_Remove__);
              IPCACEBFONO__PLEECEKPNGM(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_035e2510:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

