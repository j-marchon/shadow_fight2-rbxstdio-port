// KAHMAJKJMBK$$ANCGCCEOBAA @ RVA 0x34C0F70

void KAHMAJKJMBK__ANCGCCEOBAA
               (KAHMAJKJMBK_o *__this,AJNNHGGLGIF_o *GOAHBPBJCKC,bool NJDMEGOFJFO,MethodInfo *method
               )

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 uVar8;
  MethodInfo *pMVar9;
  AGCDKMOOJGI_array *pAVar10;
  long *plVar11;
  int32_t local_24;
  
  pMVar9 = (MethodInfo *)(ulong)NJDMEGOFJFO;
  if ((DAT_04568614 & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
    FUN_01bab630(&CNIGOFCKBGI_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECGPIFIJMFF_TypeInfo);
    FUN_01bab630(&EFNDJJDBNFN_TypeInfo);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&JFAGMCHGOEH_TypeInfo);
    FUN_01bab630(&KMFIGBGAKNL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMFIGBGAKNL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ONMBPNGKBBO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFNDJJDBNFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGCDKMOOJGI>_Add__);
    FUN_01bab630(&AJNNHGGLGIF_NJHOEHEJNPH_TypeInfo);
    FUN_01bab630(&ONMBPNGKBBO_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    FUN_01bab630(&StringLiteral_11468);
    DAT_04568614 = 1;
  }
  if (GOAHBPBJCKC == (AJNNHGGLGIF_o *)0x0) goto LAB_035c1594;
  iVar4 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  switch(iVar4) {
  case 0:
  case 1:
  case 2:
    bVar1 = (JCHNBADDBGO_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JCHNBADDBGO_TypeInfo)) goto LAB_035c158c;
    KAHMAJKJMBK__IEPLAMBNBJN(__this,(JCHNBADDBGO_o *)GOAHBPBJCKC,pMVar9);
    goto LAB_035c1548;
  case 3:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).BJCIIJEPGFL;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (KMFIGBGAKNL_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)KMFIGBGAKNL_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<KMFIGBGAKNL>_Add__;
    break;
  case 4:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).DABLKOLPECH;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (JFAGMCHGOEH_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JFAGMCHGOEH_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<JFAGMCHGOEH>_Add__;
    break;
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x22:
  case 0x24:
  case 0x28:
    bVar1 = (CNIGOFCKBGI_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)CNIGOFCKBGI_TypeInfo)) {
      KAHMAJKJMBK__CPOOGAMMCEB(__this,(CNIGOFCKBGI_o *)GOAHBPBJCKC,false,method);
      return;
    }
    goto LAB_035c158c;
  case 6:
  case 0x12:
  case 0x2a:
    bVar1 = (CNIGOFCKBGI_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)CNIGOFCKBGI_TypeInfo)) {
      KAHMAJKJMBK__JDMMBLAGLKD(__this,(CNIGOFCKBGI_o *)GOAHBPBJCKC,pMVar9);
      return;
    }
    goto LAB_035c158c;
  case 0x15:
    __this_00 = (__this->fields).POPEMFAKCLL;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<AGCDKMOOJGI>_Add__;
    break;
  case 0x16:
    bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)PNEKMHMACLG_TypeInfo)) {
      KAHMAJKJMBK__AIGBLKJEMNA(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,pMVar9);
      return;
    }
LAB_035c158c:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(GOAHBPBJCKC);
  case 0x17:
  case 0x21:
  case 0x23:
  case 0x25:
    goto switchD_035c10cc_caseD_17;
  case 0x1d:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).DCJDAHONBJI;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (ECGPIFIJMFF_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ECGPIFIJMFF_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<ECGPIFIJMFF>_Add__;
    break;
  case 0x1f:
  case 0x20:
    bVar1 = (CNIGOFCKBGI_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)CNIGOFCKBGI_TypeInfo)) goto LAB_035c158c;
    KAHMAJKJMBK__JDMMBLAGLKD(__this,(CNIGOFCKBGI_o *)GOAHBPBJCKC,pMVar9);
    goto LAB_035c1548;
  case 0x26:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).BMHBDANJFFJ;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (EFNDJJDBNFN_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)EFNDJJDBNFN_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<EFNDJJDBNFN>_Add__;
    break;
  case 0x27:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).DPAPFKANFNK;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (ONMBPNGKBBO_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ONMBPNGKBBO_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<ONMBPNGKBBO>_Add__;
    break;
  case 0x29:
    bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_035c158c;
    pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar5 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_035c1594;
    pMVar9 = (MethodInfo *)0x0;
    bVar3 = HIJGJNFACPG__DGCODECJJCC
                      ((HIJGJNFACPG_o *)GOAHBPBJCKC,(pNVar5->fields).QuestParameters,
                       (MethodInfo *)0x0);
    if (!bVar3) {
      *(undefined1 *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH = 0;
      return;
    }
    *(undefined1 *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH = 1;
    KAHMAJKJMBK__AIGBLKJEMNA(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,pMVar9);
    goto LAB_035c1548;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(AJNNHGGLGIF_NJHOEHEJNPH_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) goto LAB_035c1594;
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar7 == 0)) {
      uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar8,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar6;
    thunk_FUN_01c20e04(args->m_Items,pIVar6);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_11468,args,(MethodInfo *)0x0);
    goto LAB_035c1548;
  }
  pAVar10 = (__this_00->fields)._items;
  lVar7 = *plVar11;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pAVar10 == (AGCDKMOOJGI_array *)0x0) {
LAB_035c1594:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (__this_00->fields)._size;
  if (uVar2 < (uint)pAVar10->max_length) {
    (__this_00->fields)._size = uVar2 + 1;
    pAVar10->m_Items[(int)uVar2] = (AGCDKMOOJGI_o *)GOAHBPBJCKC;
    thunk_FUN_01c20e04(pAVar10->m_Items + (int)uVar2,GOAHBPBJCKC);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)GOAHBPBJCKC,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
LAB_035c1548:
  iVar4 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  if (iVar4 != 0x15) {
    DJNBJHPDKDP__OFNFOGHFDML<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).LJNCACBBIBD,
               (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
  }
switchD_035c10cc_caseD_17:
  return;
}

