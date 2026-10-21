// IPPEHAJADOO$$CBGCMJCJJKP @ RVA 0x31407EC

/* WARNING: Type propagation algorithm not settling */

void IPPEHAJADOO__CBGCMJCJJKP
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD,
               bool NJDMEGOFJFO,MethodInfo *method)

{
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *PDFFKDLECND;
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *EGLKJOJMDJN;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *__this_00;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *__this_01;
  IPPEHAJADOO_o *DKMMBMBMJBO;
  IPPEHAJADOO_o *pIVar4;
  IPPEHAJADOO_o *extraout_x0;
  IPPEHAJADOO_JEOCIECEGHH_o *item;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_NJPBHDMCLIN__o *__this_02;
  NJPBHDMCLIN_o *AHEFOIOKDOK;
  ECENNHNBAME_o *pEVar6;
  MethodInfo *method_00;
  IPPEHAJADOO_JEOCIECEGHH_array *pIVar7;
  int index;
  
  method_00 = (MethodInfo *)(ulong)NJDMEGOFJFO;
  if ((DAT_04566762 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
    DAT_04566762 = 1;
  }
  EGLKJOJMDJN = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo
                                  );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
  __this_00 = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
  __this_01 = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
  if (ELAGKBMJCOD != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
    if (0 < (ELAGKBMJCOD->fields)._size) {
      index = 0;
      do {
        DKMMBMBMJBO = (IPPEHAJADOO_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index,
                                 Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                                );
        lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
        pIVar4 = DKMMBMBMJBO;
        if (NJDMEGOFJFO) {
          if (DKMMBMBMJBO == (IPPEHAJADOO_o *)0x0) goto LAB_03240b50;
        }
        else {
          if (DKMMBMBMJBO == (IPPEHAJADOO_o *)0x0) goto LAB_03240b50;
          if (*(bool_conflict *)((long)&(DKMMBMBMJBO->fields).MBPELMMKGMB + 5) != false) {
            if (*(long *)&DKMMBMBMJBO->fields == 0) goto LAB_03240b50;
            if (*(char *)(*(long *)&DKMMBMBMJBO->fields + 0x9d) == '\0') {
              if (EGLKJOJMDJN == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0)
              goto LAB_03240b50;
              pIVar7 = (EGLKJOJMDJN->fields)._items;
              (EGLKJOJMDJN->fields)._version = (EGLKJOJMDJN->fields)._version + 1;
              if (pIVar7 == (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) goto LAB_03240b50;
              uVar1 = (EGLKJOJMDJN->fields)._size;
              if (uVar1 < (uint)pIVar7->max_length) {
                (EGLKJOJMDJN->fields)._size = uVar1 + 1;
                pIVar7->m_Items[(int)uVar1] = (IPPEHAJADOO_JEOCIECEGHH_o *)DKMMBMBMJBO;
                pIVar4 = (IPPEHAJADOO_o *)
                         thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,DKMMBMBMJBO);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
                           (Il2CppObject *)DKMMBMBMJBO,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                pIVar4 = extraout_x0;
              }
            }
          }
        }
        if (*(long *)&DKMMBMBMJBO->fields == 0) goto LAB_03240b50;
        PDFFKDLECND = __this_00;
        if (*(char *)(*(long *)&DKMMBMBMJBO->fields + 0x9d) != '\0') {
          PDFFKDLECND = __this_01;
        }
        IPPEHAJADOO__IHCJOCNLHCB
                  (pIVar4,(IPPEHAJADOO_JEOCIECEGHH_o *)DKMMBMBMJBO,PDFFKDLECND,method_00);
        index = index + 1;
      } while (index < (ELAGKBMJCOD->fields)._size);
    }
    if (__this_00 != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
      iVar3 = (__this_00->fields)._size;
      if (iVar3 < 1) {
        item = (IPPEHAJADOO_JEOCIECEGHH_o *)0x0;
      }
      else {
        iVar3 = UnityEngine_Random__Range(0,iVar3,(MethodInfo *)0x0);
        item = (IPPEHAJADOO_JEOCIECEGHH_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar3,
                          Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                         );
      }
      if (__this_01 != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
        iVar3 = (__this_01->fields)._size;
        if (0 < iVar3) {
          iVar3 = UnityEngine_Random__Range(0,iVar3,(MethodInfo *)0x0);
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,iVar3,
                              Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                             );
          if ((pIVar5 == (Il2CppObject *)0x0) || (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0))
          goto LAB_03240b50;
          OLKKAIFGGAK__OPGMKLMCLNO(BCKBBGCOMJD,(ECENNHNBAME_o *)pIVar5[1].klass,(MethodInfo *)0x0);
        }
        lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
        if (EGLKJOJMDJN != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
          uVar1 = (EGLKJOJMDJN->fields)._size;
          if (0 < (int)uVar1) {
            if (item != (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) {
              pIVar7 = (EGLKJOJMDJN->fields)._items;
              (EGLKJOJMDJN->fields)._version = (EGLKJOJMDJN->fields)._version + 1;
              if (pIVar7 == (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) goto LAB_03240b50;
              if (uVar1 < (uint)pIVar7->max_length) {
                (EGLKJOJMDJN->fields)._size = uVar1 + 1;
                pIVar7->m_Items[uVar1] = item;
                thunk_FUN_01c20e04(pIVar7->m_Items + uVar1,item);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
                           (Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            IPPEHAJADOO__NDEHJGJGLJD(__this,BCKBBGCOMJD,EGLKJOJMDJN,method_00);
            return;
          }
          if (item == (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) {
            return;
          }
          pEVar6 = (item->fields).BNGDONJEHMH;
          if (pEVar6 != (ECENNHNBAME_o *)0x0) {
            if ((pEVar6->fields).BFMPHOCJIHP == false) {
              __this_02 = (__this->fields).OGINLMAKLNF;
              if (__this_02 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)
              goto LAB_03240b50;
              AHEFOIOKDOK = (NJPBHDMCLIN_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_02,
                                       (item->fields).HLFBMBHOPMI,
                                       Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                      );
              IPPEHAJADOO__MBOEJOGCFHG
                        (BCKBBGCOMJD,AHEFOIOKDOK,(item->fields).BNGDONJEHMH,
                         (item->fields).HIHFJJOMDBF,method);
            }
            else {
              if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_03240b50;
              OLKKAIFGGAK__EOPFMNAHLKM
                        (BCKBBGCOMJD,pEVar6,(item->fields).CANHKPJGDFO,(MethodInfo *)0x0);
            }
            pEVar6 = (item->fields).BNGDONJEHMH;
            if ((pEVar6 != (ECENNHNBAME_o *)0x0) && (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0)) {
              (BCKBBGCOMJD->fields).LFCJAFPIKKC = (pEVar6->fields).BGHFADDGPAD;
              (BCKBBGCOMJD->fields).EMGBDHOAIND = (item->fields).NAPEFFFIIFE;
              return;
            }
          }
        }
      }
    }
  }
LAB_03240b50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

