// IPCACEBFONO$$OGJLHHJEIOG @ RVA 0x34E1E7C

void IPCACEBFONO__OGJLHHJEIOG(IPCACEBFONO_o *__this,int32_t MFDCCBAJNIO,MethodInfo *method)

{
  uint item;
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  IPCACEBFONO_ONKMJNMABJI_o *pIVar4;
  NKOIBKNPICN_o *pNVar5;
  IPCACEBFONO_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Int32_array *pSVar7;
  
  if ((DAT_0456873d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_0456873d = 1;
  }
  pIVar4 = IPCACEBFONO__AJDGKKOPLIM(__this,MFDCCBAJNIO,method);
  if ((pIVar4 == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) || ((pIVar4->fields).BCHBDELEFGK != false)) {
    return;
  }
  (pIVar4->fields).BCHBDELEFGK = true;
  pNVar5 = (__this->fields).MAABMIGPEIL;
  (__this->fields).EHMBDMLBKEA = 0;
  lVar2 = Method_System_Collections_Generic_List<int>_Add__;
  if ((pNVar5 != (NKOIBKNPICN_o *)0x0) &&
     (pSVar6 = (pNVar5->fields).OOIGOEAHPMA, pSVar6 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    item = (pIVar4->fields).HLFBMBHOPMI;
    method_00 = (MethodInfo *)(ulong)item;
    pSVar7 = (pSVar6->fields)._items;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (pSVar7 != (System_Int32_array *)0x0) {
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar7->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar7->m_Items[(int)uVar1] = item;
      }
      else {
        System_Collections_Generic_List<int>__AddWithResize
                  (pSVar6,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pNVar5 = (__this->fields).MAABMIGPEIL;
        method_00 = extraout_x1;
        if (pNVar5 == (NKOIBKNPICN_o *)0x0) goto LAB_035e1fd4;
      }
      do {
        pSVar6 = (pNVar5->fields).OOIGOEAHPMA;
        if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) break;
        if ((pSVar6->fields)._size < 3) {
          NKOIBKNPICN__NDNPGAKJLHM(pNVar5,method_00);
          IPCACEBFONO__NKMKIGOGMPK(__this,method_01);
          pNVar5 = (__this->fields).MAABMIGPEIL;
          if (pNVar5 != (NKOIBKNPICN_o *)0x0) {
            iVar3 = IPCACEBFONO__FAGKGMMBPNG
                              (__this_00,(pNVar5->fields).OOIGOEAHPMA,(pNVar5->fields).KJNPENJKBKD,
                               in_x3);
            (pNVar5->fields).BHJAGFIAEAA = iVar3;
            IPCACEBFONO__JLOLDCGDOKH(__this,method_02);
            return;
          }
          break;
        }
        System_Collections_Generic_List<int>__RemoveAt
                  (pSVar6,0,Method_System_Collections_Generic_List<int>_RemoveAt__);
        pNVar5 = (__this->fields).MAABMIGPEIL;
        method_00 = extraout_x1_00;
      } while (pNVar5 != (NKOIBKNPICN_o *)0x0);
    }
  }
LAB_035e1fd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

