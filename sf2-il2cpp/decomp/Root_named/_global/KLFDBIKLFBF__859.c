// TypeDefIndex 859
// Namespace: 
// public class KLFDBIKLFBF
// Fields:
//   public List<ABNLGBHKOCE> MHKDMKDBMBE; // 0x10
//   public List<ABNLGBHKOCE> JDJNBIAGEJA; // 0x18
//   public List<ABNLGBHKOCE> LHCPLJLGABL; // 0x20
//   public List<ABNLGBHKOCE> KFBKKBDCFAN; // 0x28
//   public List<ABNLGBHKOCE> HMOHHLONIMM; // 0x30
//   public List<ABNLGBHKOCE> GBMLCEDGHBG; // 0x38
//   public List<ABNLGBHKOCE> OCKKJBCOPMK; // 0x40
//   public List<ABNLGBHKOCE> GOHAKBJPGBJ; // 0x48
//   public List<ABNLGBHKOCE> MFADMMFGBCK; // 0x50
//   public List<ABNLGBHKOCE> KJINMOFFENB; // 0x58
//   public List<ABNLGBHKOCE> DFFCFGBEKGE; // 0x60
//   public List<ABNLGBHKOCE> PPCMOAPOBAK; // 0x68
//   public List<ABNLGBHKOCE> KPJGFGABFLB; // 0x70
//   public List<ABNLGBHKOCE> BPNPCJBJJKG; // 0x78

// ===== public void DCHFLPJPPCH(List<ABNLGBHKOCE> GOFDICMJKNH)  [RVA 0x3089DAC]
// KLFDBIKLFBF$$DCHFLPJPPCH @ RVA 0x3089DAC

/* WARNING: Removing unreachable block (ram,0x03189ff4) */
/* WARNING: Removing unreachable block (ram,0x0318a104) */

void KLFDBIKLFBF__DCHFLPJPPCH
               (KLFDBIKLFBF_o *__this,System_Collections_Generic_List_ABNLGBHKOCE__o *GOFDICMJKNH,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *item;
  bool bVar4;
  int32_t ACCIHBHMFPN;
  Model_o *__this_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar5;
  EventAnimation_o *pKVar6;
  NJPBHDMCLIN_o *pNVar7;
  ABNLGBHKOCE_array *pAVar8;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566046 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EventAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EventAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EventAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__);
    DAT_04566046 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (GOFDICMJKNH == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)GOFDICMJKNH,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__)
      ;
      return;
    }
    if ((EventAnimation_o *)local_80.fields._current == (EventAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar7 = ((EventAnimation_Fields *)((long)local_80.fields._current + 0x10))->KPFGHBEKJIM;
    if (pNVar7 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pNVar7->fields).GGIGKNJPODI;
    if (__this_00 == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EventAnimation>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
LAB_03189f20:
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<EventAnimation>_MoveNext__);
    if (bVar4) {
      if ((EventAnimation_o *)local_a0.fields._current == (EventAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ACCIHBHMFPN = EventAnimation__NHGGBEACKBD
                              ((EventAnimation_o *)local_a0.fields._current,(MethodInfo *)0x0);
      pSVar5 = KLFDBIKLFBF__FNPJOAPMNKE(__this,ACCIHBHMFPN,method);
      if (pSVar5 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (pSVar5->fields)._size;
      uVar2 = 0;
      if (iVar1 != 0) break;
      goto LAB_03189f78;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<EventAnimation>_Dispose__);
    lVar3 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    pSVar5 = (__this->fields).MHKDMKDBMBE;
    if (pSVar5 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar8 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pAVar8 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pAVar8->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      pAVar8->m_Items[(int)uVar2] = (ABNLGBHKOCE_o *)item;
      thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar2,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,item,
                 (MethodInfo_26E4DAC *)method);
    }
  } while( true );
  method = Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__;
  pKVar6 = (EventAnimation_o *)
           System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar5,iVar1 + -1,
                      (MethodInfo_26E4ADC *)
                      Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__);
  if ((EventAnimation_o *)item != pKVar6) {
    uVar2 = (pSVar5->fields)._size;
LAB_03189f78:
    lVar3 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    pAVar8 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pAVar8 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (uVar2 < (uint)pAVar8->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      pAVar8->m_Items[(int)uVar2] = (ABNLGBHKOCE_o *)item;
      thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar2,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
  goto LAB_03189f20;
}


// ===== private List<ABNLGBHKOCE> FNPJOAPMNKE(EventAnimation.MIFHAKDMDJH ACCIHBHMFPN)  [RVA 0x308A1B0]
// KLFDBIKLFBF$$FNPJOAPMNKE @ RVA 0x308A1B0

System_Collections_Generic_List_ABNLGBHKOCE__o *
KLFDBIKLFBF__FNPJOAPMNKE(KLFDBIKLFBF_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  KLFDBIKLFBF_Fields *pKVar1;
  
  switch(ACCIHBHMFPN) {
  case 1:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).JDJNBIAGEJA;
    break;
  case 2:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).LHCPLJLGABL;
    break;
  case 3:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).KFBKKBDCFAN;
    break;
  default:
    pKVar1 = &__this->fields;
    break;
  case 6:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).KJINMOFFENB;
    break;
  case 7:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).DFFCFGBEKGE;
    break;
  case 9:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).HMOHHLONIMM;
    break;
  case 10:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).GBMLCEDGHBG;
    break;
  case 0xb:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).OCKKJBCOPMK;
    break;
  case 0xc:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).GOHAKBJPGBJ;
    break;
  case 0xd:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).MFADMMFGBCK;
    break;
  case 0xe:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).PPCMOAPOBAK;
    break;
  case 0xf:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).KPJGFGABFLB;
    break;
  case 0x10:
    pKVar1 = (KLFDBIKLFBF_Fields *)&(__this->fields).BPNPCJBJJKG;
  }
  return pKVar1->MHKDMKDBMBE;
}


// ===== public void IOHLGIDFPCH()  [RVA 0x308A248]
// KLFDBIKLFBF$$IOHLGIDFPCH @ RVA 0x308A248

void KLFDBIKLFBF__IOHLGIDFPCH(KLFDBIKLFBF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar2;
  
  if ((DAT_04566047 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    DAT_04566047 = 1;
  }
  pSVar2 = (__this->fields).MHKDMKDBMBE;
  if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).JDJNBIAGEJA;
    if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).LHCPLJLGABL;
      if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).KFBKKBDCFAN;
        if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
          iVar1 = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          pSVar2 = (__this->fields).HMOHHLONIMM;
          if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
            iVar1 = (pSVar2->fields)._size;
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
            }
            pSVar2 = (__this->fields).GBMLCEDGHBG;
            if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
              iVar1 = (pSVar2->fields)._size;
              (pSVar2->fields)._size = 0;
              (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              pSVar2 = (__this->fields).OCKKJBCOPMK;
              if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                iVar1 = (pSVar2->fields)._size;
                (pSVar2->fields)._size = 0;
                (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pSVar2 = (__this->fields).GOHAKBJPGBJ;
                if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                  iVar1 = (pSVar2->fields)._size;
                  (pSVar2->fields)._size = 0;
                  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
                  }
                  pSVar2 = (__this->fields).MFADMMFGBCK;
                  if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    iVar1 = (pSVar2->fields)._size;
                    (pSVar2->fields)._size = 0;
                    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    if (0 < iVar1) {
                      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
                    }
                    pSVar2 = (__this->fields).KJINMOFFENB;
                    if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                      iVar1 = (pSVar2->fields)._size;
                      (pSVar2->fields)._size = 0;
                      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                      if (0 < iVar1) {
                        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                            (MethodInfo *)0x0);
                      }
                      pSVar2 = (__this->fields).DFFCFGBEKGE;
                      if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                        iVar1 = (pSVar2->fields)._size;
                        (pSVar2->fields)._size = 0;
                        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                        if (0 < iVar1) {
                          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                              (MethodInfo *)0x0);
                        }
                        pSVar2 = (__this->fields).PPCMOAPOBAK;
                        if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                          iVar1 = (pSVar2->fields)._size;
                          (pSVar2->fields)._size = 0;
                          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                          if (0 < iVar1) {
                            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                                (MethodInfo *)0x0);
                          }
                          pSVar2 = (__this->fields).KPJGFGABFLB;
                          if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                            iVar1 = (pSVar2->fields)._size;
                            (pSVar2->fields)._size = 0;
                            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                            if (0 < iVar1) {
                              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                                  (MethodInfo *)0x0);
                            }
                            pSVar2 = (__this->fields).BPNPCJBJJKG;
                            if (pSVar2 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
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


// ===== public void .ctor()  [RVA 0x308A4F4]
// KLFDBIKLFBF$$.ctor @ RVA 0x308A4F4

void KLFDBIKLFBF___ctor(KLFDBIKLFBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

