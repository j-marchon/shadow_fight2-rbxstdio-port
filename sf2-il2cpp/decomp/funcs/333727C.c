// AFFHKININGD$$ANCGCCEOBAA @ RVA 0x333727C

void AFFHKININGD__ANCGCCEOBAA(AFFHKININGD_o *__this,AJNNHGGLGIF_o *GOAHBPBJCKC,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *DPMPNFJJENF;
  System_Collections_Generic_List_AGCDKMOOJGI__o *DPMPNFJJENF_00;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  HIJGJNFACPG_c **ppHVar8;
  int32_t local_24;
  
  if ((DAT_045679a8 & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<AGCDKMOOJGI>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<JCHNBADDBGO>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&AJNNHGGLGIF_NJHOEHEJNPH_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    FUN_01bab630(&StringLiteral_6353);
    DAT_045679a8 = 1;
  }
  if (GOAHBPBJCKC == (AJNNHGGLGIF_o *)0x0) {
LAB_03437554:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  switch(iVar3) {
  case 0:
  case 1:
  case 2:
    bVar2 = (JCHNBADDBGO_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar2) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)JCHNBADDBGO_TypeInfo)) goto LAB_03437558;
    DPMPNFJJENF_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).MIHBDEKEPEB;
    puVar7 = &Method_DJNBJHPDKDP_OFNFOGHFDML<JCHNBADDBGO>__;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
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
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
    goto switchD_03437358_caseD_3;
  case 0x15:
    bVar2 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar2) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) goto LAB_03437558;
    DPMPNFJJENF_00 = (__this->fields).HFDOEONIBFA;
    puVar7 = &Method_DJNBJHPDKDP_OFNFOGHFDML<AGCDKMOOJGI>__;
    break;
  case 0x16:
    ppHVar8 = (HIJGJNFACPG_c **)&PNEKMHMACLG_TypeInfo;
    goto LAB_03437460;
  case 0x29:
    ppHVar8 = &HIJGJNFACPG_TypeInfo;
LAB_03437460:
    bVar2 = (((Il2CppClass *)*ppHVar8)->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar2) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)*ppHVar8)) {
LAB_03437558:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(GOAHBPBJCKC);
    }
    AFFHKININGD__CGEOMKBMHCF(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,method);
    goto switchD_03437358_caseD_3;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(AJNNHGGLGIF_NJHOEHEJNPH_TypeInfo,&local_24);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar4;
      thunk_FUN_01c20e04(args->m_Items,pIVar4);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_6353,args,(MethodInfo *)0x0);
      return;
    }
    goto LAB_03437554;
  }
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)DPMPNFJJENF_00,(Il2CppObject *)GOAHBPBJCKC,
             (MethodInfo_1E833E4 *)*puVar7);
switchD_03437358_caseD_3:
  iVar1 = (GOAHBPBJCKC->fields).PJEIFMBEAKH;
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      DPMPNFJJENF = (__this->fields).KFHLHCHCMPM;
      goto LAB_03437390;
    }
    DJNBJHPDKDP__OFNFOGHFDML<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).KFHLHCHCMPM,
               (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
  }
  DPMPNFJJENF = (__this->fields).LJNCACBBIBD;
LAB_03437390:
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)DPMPNFJJENF,(Il2CppObject *)GOAHBPBJCKC,
             Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).FEODLOLDCKM,
             (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
  return;
}

