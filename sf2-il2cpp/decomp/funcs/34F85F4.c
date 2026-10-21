// OLKKAIFGGAK.OJHIDJPICJN$$PNKPICCCNEM @ RVA 0x34F85F4

void OLKKAIFGGAK_OJHIDJPICJN__PNKPICCCNEM
               (OLKKAIFGGAK_OJHIDJPICJN_o *__this,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int32_t BKFOLMBMFNP;
  ECENNHNBAME_o *item;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar4;
  KJFPGDFNFCL_o *__this_00;
  ECENNHNBAME_o *pEVar5;
  MethodInfo *method_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar6;
  ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o *pEVar7;
  ECENNHNBAME_array *pEVar8;
  int index;
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_01;
  int index_00;
  
  if ((DAT_0456880f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    DAT_0456880f = 1;
  }
  if (ELAGKBMJCOD != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    if (0 < (ELAGKBMJCOD->fields)._size) {
      index = 0;
      do {
        item = (ECENNHNBAME_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index,
                          Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
        lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
        if (((item == (ECENNHNBAME_o *)0x0) ||
            (pEVar6 = (item->fields).DMGLMCBIAGL, pEVar6 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) ||
           (pEVar7 = (pEVar6->fields).MGCCHNBNJPC,
           pEVar7 == (ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o *)0x0)) goto LAB_035f8890;
        if ((pEVar7->fields).OKONAOJIODE != false) {
          pSVar4 = (__this->fields).KIHPMHHBCKM;
          if (pSVar4 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) goto LAB_035f8890;
          pEVar8 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pEVar8 == (ECENNHNBAME_array *)0x0) goto LAB_035f8890;
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pEVar8->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pEVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pEVar8->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        pEVar6 = (item->fields).DMGLMCBIAGL;
        if ((pEVar6 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) ||
           (__this_01 = (pEVar6->fields).AFFIHBMACFF,
           __this_01 == (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0)) goto LAB_035f8890;
        if (0 < (__this_01->fields)._size) {
          index_00 = 0;
          do {
            method_00 = Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__;
            __this_00 = (KJFPGDFNFCL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,index_00,
                                   (MethodInfo_26E4ADC *)
                                   Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
            if (__this_00 == (KJFPGDFNFCL_o *)0x0) goto LAB_035f8890;
            BKFOLMBMFNP = KJFPGDFNFCL__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
            pSVar4 = OLKKAIFGGAK_OJHIDJPICJN__CENMCPCOAGF(__this,BKFOLMBMFNP,method_00);
            if (pSVar4 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) goto LAB_035f8890;
            iVar1 = (pSVar4->fields)._size;
            uVar2 = 0;
            if (iVar1 == 0) {
LAB_035f8798:
              lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
              pEVar8 = (pSVar4->fields)._items;
              (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
              if (pEVar8 == (ECENNHNBAME_array *)0x0) goto LAB_035f8890;
              if (uVar2 < (uint)pEVar8->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pEVar8->m_Items[(int)uVar2] = item;
                thunk_FUN_01c20e04(pEVar8->m_Items + (int)uVar2,item);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              pEVar5 = (ECENNHNBAME_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar4,iVar1 + -1,
                                  Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
              if (pEVar5 != item) {
                uVar2 = (pSVar4->fields)._size;
                goto LAB_035f8798;
              }
            }
            index_00 = index_00 + 1;
          } while (index_00 < (__this_01->fields)._size);
        }
        lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
        pSVar4 = (__this->fields).JGHBKJJEOBO;
        if (pSVar4 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) goto LAB_035f8890;
        pEVar8 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pEVar8 == (ECENNHNBAME_array *)0x0) goto LAB_035f8890;
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pEVar8->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pEVar8->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pEVar8->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (index < (ELAGKBMJCOD->fields)._size);
    }
    return;
  }
LAB_035f8890:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

