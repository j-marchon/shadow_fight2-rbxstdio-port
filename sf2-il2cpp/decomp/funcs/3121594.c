// FAMICAJFCDH$$OOMNPLFJHPB @ RVA 0x3121594

void FAMICAJFCDH__OOMNPLFJHPB(FAMICAJFCDH_o *__this,int32_t JNOELFJHALI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  MEJIKMPNBNL_o *pMVar4;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  OOMHDDBCBJP_o *__this_01;
  System_String_o *OIAJEEOAPNB;
  int32_t extraout_w1;
  int32_t extraout_w1_00;
  ACHLOMELAJE_o *pAVar5;
  DNELIPCHKLK_o *pDVar6;
  
  if ((DAT_0456662b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15236);
    DAT_0456662b = 1;
  }
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if ((iVar2 == JNOELFJHALI) && (iVar2 = extraout_w1, (__this->fields).MCNDIFEIEJH == false)) {
LAB_03221764:
      FAMICAJFCDH__LGEMJFBPAGO(__this,iVar2,method);
      return;
    }
    if (JNOELFJHALI == 6) {
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__EKPAFDJIAGI
                  (pNVar3,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,
                   (__this->fields).IIKPDAEPPLI,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((JNOELFJHALI == 5) && ((__this->fields).PEGFPLIAHHC != false)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
           (pDVar6 = (pAVar5->fields).DHDPPCNPAIE, pDVar6 == (DNELIPCHKLK_o *)0x0))
        goto LAB_032217a8;
        bVar1 = System_String__op_Inequality
                          ((pDVar6->fields).GDPFBDIJNHA,StringLiteral_15236,(MethodInfo *)0x0);
        if (bVar1) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          pMVar4 = NLPJLHOEAOE__KHHBHBLIANB(StringLiteral_15236,(MethodInfo *)0x0);
          if ((((pMVar4 == (MEJIKMPNBNL_o *)0x0) ||
               (__this_00 = (pMVar4->fields).BDCBJJGNPMC,
               __this_00 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) ||
              (__this_01 = (OOMHDDBCBJP_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_00,0,
                                      Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__
                                     ), __this_01 == (OOMHDDBCBJP_o *)0x0)) ||
             (OIAJEEOAPNB = OOMHDDBCBJP__LOHPFCGCHNH(__this_01,(MethodInfo *)0x0),
             pAVar5 == (ACHLOMELAJE_o *)0x0)) goto LAB_032217a8;
          ACHLOMELAJE__MKKABLNAEOD(pAVar5,OIAJEEOAPNB,(MethodInfo *)0x0);
        }
      }
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        method = (MethodInfo *)0x0;
        bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                          (pNVar3,JNOELFJHALI,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,
                           (__this->fields).IIKPDAEPPLI,(MethodInfo *)0x0);
        iVar2 = extraout_w1_00;
        if (bVar1) {
          return;
        }
        goto LAB_03221764;
      }
    }
  }
LAB_032217a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

