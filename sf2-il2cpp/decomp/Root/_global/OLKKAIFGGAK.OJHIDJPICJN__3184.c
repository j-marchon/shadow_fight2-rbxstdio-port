// TypeDefIndex 3184
// Namespace: 
// public class OLKKAIFGGAK.OJHIDJPICJN
// Fields:
//   public List<ECENNHNBAME> JGHBKJJEOBO; // 0x10
//   public List<ECENNHNBAME> JDJNBIAGEJA; // 0x18
//   public List<ECENNHNBAME> LHCPLJLGABL; // 0x20
//   public List<ECENNHNBAME> KFBKKBDCFAN; // 0x28
//   public List<ECENNHNBAME> HMOHHLONIMM; // 0x30
//   public List<ECENNHNBAME> OCKKJBCOPMK; // 0x38
//   public List<ECENNHNBAME> GBMLCEDGHBG; // 0x40
//   public List<ECENNHNBAME> GOHAKBJPGBJ; // 0x48
//   public List<ECENNHNBAME> MFADMMFGBCK; // 0x50
//   public List<ECENNHNBAME> KJINMOFFENB; // 0x58
//   public List<ECENNHNBAME> DFFCFGBEKGE; // 0x60
//   public List<ECENNHNBAME> PPCMOAPOBAK; // 0x68
//   public List<ECENNHNBAME> KPJGFGABFLB; // 0x70
//   public List<ECENNHNBAME> BPNPCJBJJKG; // 0x78
//   public List<ECENNHNBAME> KIHPMHHBCKM; // 0x80
//   public List<ECENNHNBAME> IHFEGCMHDJF; // 0x88

// ===== public void PNKPICCCNEM(List<ECENNHNBAME> ELAGKBMJCOD)  [RVA 0x34F85F4]
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


// ===== public List<ECENNHNBAME> CENMCPCOAGF(KJFPGDFNFCL.MIFHAKDMDJH BKFOLMBMFNP)  [RVA 0x34F8894]
// OLKKAIFGGAK.OJHIDJPICJN$$CENMCPCOAGF @ RVA 0x34F8894

System_Collections_Generic_List_ECENNHNBAME__o *
OLKKAIFGGAK_OJHIDJPICJN__CENMCPCOAGF
          (OLKKAIFGGAK_OJHIDJPICJN_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  OLKKAIFGGAK_OJHIDJPICJN_Fields *pOVar1;
  
  switch(BKFOLMBMFNP) {
  case 1:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).JDJNBIAGEJA;
    break;
  case 2:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).LHCPLJLGABL;
    break;
  case 3:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).KFBKKBDCFAN;
    break;
  default:
    pOVar1 = &__this->fields;
    break;
  case 6:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).KJINMOFFENB;
    break;
  case 7:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).DFFCFGBEKGE;
    break;
  case 9:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).HMOHHLONIMM;
    break;
  case 10:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).GBMLCEDGHBG;
    break;
  case 0xc:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).GOHAKBJPGBJ;
    break;
  case 0xd:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).MFADMMFGBCK;
    break;
  case 0xe:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).PPCMOAPOBAK;
    break;
  case 0xf:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).KPJGFGABFLB;
    break;
  case 0x10:
    pOVar1 = (OLKKAIFGGAK_OJHIDJPICJN_Fields *)&(__this->fields).BPNPCJBJJKG;
  }
  return pOVar1->JGHBKJJEOBO;
}


// ===== public void .ctor()  [RVA 0x34F8924]
// OLKKAIFGGAK.OJHIDJPICJN$$.ctor @ RVA 0x34F8924

void OLKKAIFGGAK_OJHIDJPICJN___ctor(OLKKAIFGGAK_OJHIDJPICJN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar1;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568810 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04568810 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  (__this->fields).JGHBKJJEOBO = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).JDJNBIAGEJA;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).LHCPLJLGABL;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).KFBKKBDCFAN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).HMOHHLONIMM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).OCKKJBCOPMK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).GBMLCEDGHBG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).GOHAKBJPGBJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).MFADMMFGBCK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).KJINMOFFENB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).DFFCFGBEKGE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).PPCMOAPOBAK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).KPJGFGABFLB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).BPNPCJBJJKG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).KIHPMHHBCKM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar2 = &(__this->fields).IHFEGCMHDJF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void JEHIPPMCHKO()  [RVA 0x34F8BC8]
// OLKKAIFGGAK.OJHIDJPICJN$$JEHIPPMCHKO @ RVA 0x34F8BC8

void OLKKAIFGGAK_OJHIDJPICJN__JEHIPPMCHKO(OLKKAIFGGAK_OJHIDJPICJN_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar2;
  
  if ((DAT_04568811 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    DAT_04568811 = 1;
  }
  pSVar2 = (__this->fields).JGHBKJJEOBO;
  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).JDJNBIAGEJA;
    if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).LHCPLJLGABL;
      if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).HMOHHLONIMM;
        if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
          iVar1 = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          pSVar2 = (__this->fields).GBMLCEDGHBG;
          if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
            iVar1 = (pSVar2->fields)._size;
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
            }
            pSVar2 = (__this->fields).GOHAKBJPGBJ;
            if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
              iVar1 = (pSVar2->fields)._size;
              (pSVar2->fields)._size = 0;
              (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              pSVar2 = (__this->fields).MFADMMFGBCK;
              if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                iVar1 = (pSVar2->fields)._size;
                (pSVar2->fields)._size = 0;
                (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pSVar2 = (__this->fields).KJINMOFFENB;
                if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                  iVar1 = (pSVar2->fields)._size;
                  (pSVar2->fields)._size = 0;
                  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
                  }
                  pSVar2 = (__this->fields).DFFCFGBEKGE;
                  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    iVar1 = (pSVar2->fields)._size;
                    (pSVar2->fields)._size = 0;
                    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    if (0 < iVar1) {
                      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
                    }
                    pSVar2 = (__this->fields).PPCMOAPOBAK;
                    if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                      iVar1 = (pSVar2->fields)._size;
                      (pSVar2->fields)._size = 0;
                      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                      if (0 < iVar1) {
                        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                            (MethodInfo *)0x0);
                      }
                      pSVar2 = (__this->fields).KPJGFGABFLB;
                      if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                        iVar1 = (pSVar2->fields)._size;
                        (pSVar2->fields)._size = 0;
                        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                        if (0 < iVar1) {
                          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                              (MethodInfo *)0x0);
                        }
                        pSVar2 = (__this->fields).BPNPCJBJJKG;
                        if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                          iVar1 = (pSVar2->fields)._size;
                          (pSVar2->fields)._size = 0;
                          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                          if (0 < iVar1) {
                            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                                (MethodInfo *)0x0);
                          }
                          pSVar2 = (__this->fields).KIHPMHHBCKM;
                          if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                            iVar1 = (pSVar2->fields)._size;
                            (pSVar2->fields)._size = 0;
                            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                            if (0 < iVar1) {
                              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                                  (MethodInfo *)0x0);
                            }
                            pSVar2 = (__this->fields).IHFEGCMHDJF;
                            if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                              iVar1 = (pSVar2->fields)._size;
                              (pSVar2->fields)._size = 0;
                              (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                              if (0 < iVar1) {
                                System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,
                                                    iVar1,(MethodInfo *)0x0);
                                return;
                              }
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BCKHIHGPFEF(List<ECENNHNBAME> ELAGKBMJCOD)  [RVA 0x34F8E74]
// OLKKAIFGGAK.OJHIDJPICJN$$BCKHIHGPFEF @ RVA 0x34F8E74

/* WARNING: Removing unreachable block (ram,0x035f9054) */
/* WARNING: Removing unreachable block (ram,0x035f9128) */

void OLKKAIFGGAK_OJHIDJPICJN__BCKHIHGPFEF
               (OLKKAIFGGAK_OJHIDJPICJN_o *__this,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,MethodInfo *method)

{
  Il2CppObject *item;
  bool bVar1;
  int32_t BKFOLMBMFNP;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568812 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
    DAT_04568812 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__)
      ;
      return;
    }
    if ((KJFPGDFNFCL_o *)local_80.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (((KJFPGDFNFCL_o *)((long)local_80.fields._current + 0x48))->fields).KFFGGNGPNLO;
    if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pSVar3[3].klass == (System_String_c *)0x0) break;
    if (*(char *)&((pSVar3[3].klass)->_1).name != '\0') {
      pSVar2 = (__this->fields).KIHPMHHBCKM;
      if (pSVar2 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__;
      bVar1 = System_Collections_Generic_List<object>__Remove
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         local_80.fields._current,
                         (MethodInfo_26E62D4 *)
                         Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
      pSVar3 = (((KJFPGDFNFCL_o *)((long)item + 0x48))->fields).KFFGGNGPNLO;
      if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(bVar1);
      }
    }
    if (pSVar3->fields == (System_String_Fields)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3->fields,
               Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__
                             ), bVar1) {
      if ((KJFPGDFNFCL_o *)local_a0.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BKFOLMBMFNP = KJFPGDFNFCL__NHGGBEACKBD
                              ((KJFPGDFNFCL_o *)local_a0.fields._current,(MethodInfo *)0x0);
      pSVar2 = OLKKAIFGGAK_OJHIDJPICJN__CENMCPCOAGF(__this,BKFOLMBMFNP,method);
      if (pSVar2 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,item,
                 (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    pSVar2 = (__this->fields).JGHBKJJEOBO;
    if (pSVar2 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar2,item,
               (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

