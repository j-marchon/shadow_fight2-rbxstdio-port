// FCJBEKHDLAF$$IBPFFBENEIN @ RVA 0x33EF01C

void FCJBEKHDLAF__IBPFFBENEIN
               (AFFHKININGD_o *FBFPLEFCDOK,PJKHAJKEHEL_o *KCHOEJOHIMM,PJKHAJKEHEL_o *JEDELFOBLEN,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t CLFDJLLDNGD,
               CMAACCOMHBJ_o *IJHKKEDEIHK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar5;
  System_Collections_Generic_List_object__o *__this;
  PJKHAJKEHEL_o *item;
  PJKHAJKEHEL_array *pPVar6;
  OOMHDDBCBJP_o *__this_00;
  CMAACCOMHBJ_Fields *pCVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567f09 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567f09 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (IJHKKEDEIHK != (CMAACCOMHBJ_o *)0x0) {
    pCVar7 = &IJHKKEDEIHK->fields;
    pCVar7->PNOOBNMLMAC = (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0;
    thunk_FUN_01c20e04(pCVar7,0);
    (IJHKKEDEIHK->fields).DHKKFLABKEF = 0;
    (IJHKKEDEIHK->fields).DIOPDIKJLCA = false;
    (IJHKKEDEIHK->fields).EOGKCNNHPFL = true;
    (IJHKKEDEIHK->fields).BLOEBCBBGBK = true;
    (IJHKKEDEIHK->fields).CJEBOKPPFDK = true;
    (IJHKKEDEIHK->fields).HIOHGCIKLNF = false;
    if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
      __this_00 = (FBFPLEFCDOK->fields).IFJLLGPGMHM;
      bVar3 = AFFHKININGD__IJKNNMOKCKL(FBFPLEFCDOK,(MethodInfo *)0x0);
      if (bVar3) {
        if (KCHOEJOHIMM == (PJKHAJKEHEL_o *)0x0) goto LAB_034ef364;
        if ((KCHOEJOHIMM->fields).GPLLAHCFFIH == 0) {
          if (JEDELFOBLEN == (PJKHAJKEHEL_o *)0x0) goto LAB_034ef364;
          bVar3 = (JEDELFOBLEN->fields).GPLLAHCFFIH == 0;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = true;
      }
      (IJHKKEDEIHK->fields).BLOEBCBBGBK = bVar3;
      (IJHKKEDEIHK->fields).EOGKCNNHPFL = bVar3;
      if (__this_00 != (OOMHDDBCBJP_o *)0x0) {
        iVar4 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
        if (((iVar4 == 2) ||
            (iVar4 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0), iVar4 == 10)) ||
           (iVar4 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0), iVar4 == 0x15)) {
          pSVar5 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar5,
                     Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
          pCVar7->PNOOBNMLMAC = pSVar5;
          thunk_FUN_01c20e04(pCVar7,pSVar5);
          __this = (System_Collections_Generic_List_object__o *)
                   (*(__this_00->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._10_DHBIECBOKMB.method);
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034ef364;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,__this,
                     Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          while( true ) {
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                              );
            if (!bVar3) break;
            if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = local_70.fields._current[0x12].monitor;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            item = MGNPHCAAEIO__DDHNCKDHKAC(pSVar5,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
            if (item != (PJKHAJKEHEL_o *)0x0) {
              pSVar5 = pCVar7->PNOOBNMLMAC;
              if (pSVar5 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pPVar6 = (pSVar5->fields)._items;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (pPVar6 == (PJKHAJKEHEL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (pSVar5->fields)._size;
              if (uVar1 < (uint)pPVar6->max_length) {
                (pSVar5->fields)._size = uVar1 + 1;
                pPVar6->m_Items[(int)uVar1] = item;
                thunk_FUN_01c20e04(pPVar6->m_Items + (int)uVar1);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
          iVar4 = (FBFPLEFCDOK->fields).HLFBMBHOPMI;
          (IJHKKEDEIHK->fields).DIOPDIKJLCA = true;
          (IJHKKEDEIHK->fields).DHKKFLABKEF = iVar4;
        }
        else {
          (IJHKKEDEIHK->fields).PNOOBNMLMAC = DFGLEOANOFI;
          thunk_FUN_01c20e04(pCVar7,DFGLEOANOFI);
          (IJHKKEDEIHK->fields).DHKKFLABKEF = CLFDJLLDNGD;
        }
        iVar4 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
        if ((iVar4 == 5) ||
           (iVar4 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0), iVar4 == 0x14)) {
          (IJHKKEDEIHK->fields).EOGKCNNHPFL = false;
          (IJHKKEDEIHK->fields).BLOEBCBBGBK = false;
        }
        iVar4 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
        (IJHKKEDEIHK->fields).CJEBOKPPFDK = iVar4 != 0x14;
        iVar4 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
        if (iVar4 == 0x11) {
          (IJHKKEDEIHK->fields).HIOHGCIKLNF = true;
        }
        return;
      }
    }
  }
LAB_034ef364:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

