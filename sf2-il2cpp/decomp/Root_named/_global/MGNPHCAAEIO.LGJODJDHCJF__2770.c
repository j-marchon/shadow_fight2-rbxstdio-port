// TypeDefIndex 2770
// Namespace: 
// public class GameUtils.LGJODJDHCJF
// Fields:
//   public static List<GameUtils.IEKBEIOCOPO> CDBLDJLHFPL; // 0x0

// ===== public void .ctor()  [RVA 0x340EE00]
// GameUtils.LGJODJDHCJF$$.ctor @ RVA 0x340EE00

void GameUtils_LGJODJDHCJF___ctor(GameUtils_LGJODJDHCJF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x340EE08]
// GameUtils.LGJODJDHCJF$$HNIHOIAMDPC @ RVA 0x340EE08

/* WARNING: Removing unreachable block (ram,0x0350f2c4) */
/* WARNING: Removing unreachable block (ram,0x0350f050) */
/* WARNING: Removing unreachable block (ram,0x0350f2a4) */
/* WARNING: Removing unreachable block (ram,0x0350f068) */
/* WARNING: Removing unreachable block (ram,0x0350f298) */
/* WARNING: Removing unreachable block (ram,0x0350f088) */
/* WARNING: Removing unreachable block (ram,0x0350f29c) */
/* WARNING: Removing unreachable block (ram,0x0350f0ac) */
/* WARNING: Removing unreachable block (ram,0x0350f2b4) */
/* WARNING: Removing unreachable block (ram,0x0350f0e0) */
/* WARNING: Removing unreachable block (ram,0x0350f2a8) */
/* WARNING: Removing unreachable block (ram,0x0350f118) */
/* WARNING: Removing unreachable block (ram,0x0350f2b0) */
/* WARNING: Removing unreachable block (ram,0x0350f158) */
/* WARNING: Removing unreachable block (ram,0x0350f180) */
/* WARNING: Removing unreachable block (ram,0x0350f188) */
/* WARNING: Removing unreachable block (ram,0x0350f2ac) */
/* WARNING: Removing unreachable block (ram,0x0350f194) */
/* WARNING: Removing unreachable block (ram,0x0350f2b8) */
/* WARNING: Removing unreachable block (ram,0x0350f1ac) */
/* WARNING: Removing unreachable block (ram,0x0350f1e0) */
/* WARNING: Removing unreachable block (ram,0x0350f1c0) */

void GameUtils_LGJODJDHCJF__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  ushort uVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  undefined8 *puVar5;
  long *plVar6;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *pSVar7;
  System_Collections_IEnumerator_c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_0456806b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&GameUtils_IEKBEIOCOPO_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&GameUtils_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8310/*"Label"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14891/*"Weight"*/);
    DAT_0456806b = 1;
    method = extraout_x1;
  }
  if ((GameUtils_LGJODJDHCJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_LGJODJDHCJF_TypeInfo,method);
  }
  pSVar7 = GameUtils_LGJODJDHCJF_TypeInfo->static_fields->CDBLDJLHFPL;
  if (pSVar7 != (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
    length = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = System_Xml_XmlNode__GetEnumerator(AHDGNOJPPIB,(MethodInfo *)0x0);
      if (pSVar3 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar8 = pSVar3->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar8->vtable + *piVar11;
            goto LAB_0350ef94;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0350ef94:
      uVar10 = (*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(pSVar3,System_IDisposable_TypeInfo);
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0350f264;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0350f264:
          (*(code *)*puVar5)(plVar6,puVar5[1]);
        }
        return;
      }
      pSVar8 = pSVar3->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar8->vtable + (*piVar11 + 1);
            goto LAB_0350eff4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0350eff4:
      puVar5 = (undefined8 *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if (puVar5 == (undefined8 *)0x0) {
        auVar13 = thunk_FUN_01bda818(GameUtils_IEKBEIOCOPO_TypeInfo);
        GameUtils_IEKBEIOCOPO___ctor(auVar13._0_8_,auVar13._8_8_);
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      FUN_03f93690(*puVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static List<GameUtils.IEKBEIOCOPO> LDKFHCIMHJE()  [RVA 0x340F404]
// GameUtils.LGJODJDHCJF$$LDKFHCIMHJE @ RVA 0x340F404

System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *
GameUtils_LGJODJDHCJF__LDKFHCIMHJE(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  bool bVar4;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *__this;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  FBMGMPIFMNH_o *__this_01;
  System_String_array *pSVar7;
  GameUtils_IEKBEIOCOPO_array *pMVar8;
  ulong uVar9;
  ulong uVar10;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456806c & 1) == 0) {
    FUN_01bab630(&Roster_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<GameUtils_IEKBEIOCOPO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<GameUtils_IEKBEIOCOPO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<GameUtils_IEKBEIOCOPO>_get_Current__
                );
    FUN_01bab630(&GameUtils_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_TypeInfo);
    FUN_01bab630(&StringLiteral_2626/*"ADVERTISING"*/);
    FUN_01bab630(&StringLiteral_6943/*"HAVE_PAYMENTS"*/);
    DAT_0456806c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>__ctor__);
  if ((GameUtils_LGJODJDHCJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GameUtils_LGJODJDHCJF_TypeInfo->static_fields->CDBLDJLHFPL;
  if (__this_00 == (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
LAB_0350f558:
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<GameUtils_IEKBEIOCOPO>_MoveNext__
                        );
      item = local_80.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<GameUtils_IEKBEIOCOPO>_Dispose__
                  );
        return __this;
      }
      if ((GameUtils_IEKBEIOCOPO_o *)local_80.fields._current == (GameUtils_IEKBEIOCOPO_o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((GameUtils_IEKBEIOCOPO_Fields *)((long)local_80.fields._current + 0x10))->
             EOLDGEJPLJK == 0);
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                      (((GameUtils_IEKBEIOCOPO_Fields *)((long)local_80.fields._current + 0x10))->
                       AMGLPLAOCPD,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_Add__;
    if (!bVar3) break;
    if (__this == (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar8 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pMVar8 == (GameUtils_IEKBEIOCOPO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pMVar8->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pMVar8->m_Items[(int)uVar1] = (GameUtils_IEKBEIOCOPO_o *)item;
      thunk_FUN_01c20e04(pMVar8->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pSVar5 = ((GameUtils_IEKBEIOCOPO_Fields *)((long)item + 0x10))->AMGLPLAOCPD;
  if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = System_String__Split(pSVar5,0x7c,0,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)pSVar6->max_length) goto code_r0x0350f5fc;
  goto LAB_0350f68c;
code_r0x0350f5fc:
  bVar3 = false;
  uVar10 = 0;
  uVar9 = pSVar6->max_length & 0xffffffff;
  pSVar7 = pSVar6;
  do {
    if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0(pSVar7);
    }
    pSVar5 = pSVar6->m_Items[uVar10];
    bVar4 = System_String__op_Equality(pSVar5,StringLiteral_6943/*"HAVE_PAYMENTS"*/,(MethodInfo *)0x0);
    if (bVar4) {
      if ((Roster_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = (FBMGMPIFMNH_o *)Roster_TypeInfo->static_fields->HAEGJFPKIAD;
      if (__this_01 == (FBMGMPIFMNH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = FBMGMPIFMNH__NPNEPMBNJPH(__this_01,(MethodInfo *)0x0);
      if (bVar4) goto LAB_0350f658;
      bVar3 = true;
      bVar4 = false;
    }
    else {
LAB_0350f658:
      bVar4 = System_String__op_Equality(pSVar5,StringLiteral_2626/*"ADVERTISING"*/,(MethodInfo *)0x0);
    }
    pSVar7 = (System_String_array *)(ulong)bVar4;
    uVar1 = (uint)pSVar6->max_length;
    uVar9 = (ulong)uVar1;
    uVar10 = uVar10 + 1;
  } while ((long)uVar10 < (long)(int)uVar1);
  if (!bVar3) {
LAB_0350f68c:
    lVar2 = Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_Add__;
    if (__this == (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar8 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pMVar8 == (GameUtils_IEKBEIOCOPO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pMVar8->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pMVar8->m_Items[(int)uVar1] = (GameUtils_IEKBEIOCOPO_o *)item;
      thunk_FUN_01c20e04(pMVar8->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_0350f558;
}


// ===== private static void .cctor()  [RVA 0x340F81C]
// GameUtils.LGJODJDHCJF$$.cctor @ RVA 0x340F81C

void GameUtils_LGJODJDHCJF___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *__this;
  
  if ((DAT_0456806d & 1) == 0) {
    FUN_01bab630(&GameUtils_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_TypeInfo);
    DAT_0456806d = 1;
  }
  __this = (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<GameUtils_IEKBEIOCOPO>__ctor__);
  GameUtils_LGJODJDHCJF_TypeInfo->static_fields->CDBLDJLHFPL = __this;
  thunk_FUN_01c20e04(GameUtils_LGJODJDHCJF_TypeInfo->static_fields,__this);
  return;
}

