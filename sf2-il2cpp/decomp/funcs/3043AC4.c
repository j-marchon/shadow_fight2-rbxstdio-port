// PJKHAJKEHEL$$LBNKPLKIIOP @ RVA 0x3043AC4

void PJKHAJKEHEL__LBNKPLKIIOP(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  FPLCEOJCPOD_o *pFVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ;
  Il2CppObject *pIVar5;
  int CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ABCMPMHNMAP_o *pAVar6;
  FNEMMDECEIJ_o *pFVar7;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_00;
  int index;
  Il2CppClass *PMACBPAMPJA;
  undefined8 local_68;
  bool local_58 [4];
  int32_t local_54;
  
  if ((DAT_04565dbe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_get_Count__);
                    /* try { // try from 03143b04 to 03243b7b has its CatchHandler @ 03143b04
                       catch() { ... } // from try @ 03143b04 with catch @ 03143b04
                       catch() { ... } // from try @ 03143bc0 with catch @ 03143b04
                       catch() { ... } // from try @ 03143bfc with catch @ 03143b04
                       catch() { ... } // from try @ 03143c44 with catch @ 03143b04 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565dbe = 1;
  }
  local_54 = 0;
  local_68 = 0;
  pFVar4 = (__this->fields).ACHJNNOKEDK;
  if (pFVar4 != (FPLCEOJCPOD_o *)0x0) {
    FPLCEOJCPOD__NDNPGAKJLHM(pFVar4,(MethodInfo *)0x0);
    GHAAKPDHIJJ = (System_Collections_Generic_List_HOOAAGABMBL__o *)
                  (*(__this->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                            (__this,(__this->klass->vtable)._5_ACBMLHJIFMD.method);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    pAVar6 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
    if ((pAVar6 != (ABCMPMHNMAP_o *)0x0) &&
       (__this_00 = (pAVar6->fields).ACHJNNOKEDK,
       __this_00 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
                    /* try { // try from 03143b7c to 03243b9b has its CatchHandler @ 03143c04 */
      if (0 < (__this_00->fields)._size) {
        index = 0;
        do {
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<IHDFIJGDCBL>_get_Item__);
          if (pIVar5 == (Il2CppObject *)0x0) goto LAB_03143d54;
          PMACBPAMPJA = pIVar5[1].klass;
          local_54 = 0;
          pFVar4 = (__this->fields).NIDLHDFNACM;
                    /* try { // try from 03143bb8 to 03243bbf has its CatchHandler @ 03143bfc */
          if (pFVar4 == (FPLCEOJCPOD_o *)0x0) goto LAB_03143d54;
                    /* try { // try from 03143bc0 to 03243bf7 has its CatchHandler @ 03143b04 */
          method_01 = (MethodInfo *)0x0;
          bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                            (pFVar4,(System_String_o *)PMACBPAMPJA,&local_54,true,false,
                             (MethodInfo *)0x0);
          if (bVar1) {
            pFVar4 = (__this->fields).ACHJNNOKEDK;
            CJNHFNHJHPE = local_54;
            if (pFVar4 == (FPLCEOJCPOD_o *)0x0) goto LAB_03143d54;
LAB_03143cf8:
            FPLCEOJCPOD__FOOHBJNHOKK
                      (pFVar4,(System_String_o *)PMACBPAMPJA,CJNHFNHJHPE,true,(MethodInfo *)0x0);
          }
          else {
            method_00 = (MethodInfo *)local_58;
                    /* try { // try from 03143bf8 to 03243bfb has its CatchHandler @ 03143c00 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03143bb8 with catch @ 03143bfc
                       try { // try from 03143bfc to 03243c1b has its CatchHandler @ 03143b04 */
            local_58[0] = false;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03143bf8 with catch @ 03143c00
                        */
            iVar2 = PJKHAJKEHEL__MHMPKFOGHHI
                              ((PJKHAJKEHEL_o *)(ulong)bVar1,(System_String_o *)PMACBPAMPJA,
                               GHAAKPDHIJJ,(bool *)method_00,method_01);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03143b7c with catch @ 03143c04
                        */
            iVar3 = PJKHAJKEHEL__BJFLFMOBCCC
                              (__this,(System_String_o *)PMACBPAMPJA,local_58,method_00);
                    /* try { // try from 03143c1c to 03243c1f has its CatchHandler @ 03143c2c */
            local_68 = local_68 & 0xffffffff;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03143c1c with catch @ 03143c2c */
              thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
            }
                    /* try { // try from 03143c38 to 03243c43 has its CatchHandler @ 03143c58 */
            pFVar7 = MGNPHCAAEIO_TypeInfo->static_fields->LMKEGJCEGOJ;
                    /* try { // try from 03143c44 to 03243c4f has its CatchHandler @ 03143b04 */
            if ((pFVar7 == (FNEMMDECEIJ_o *)0x0) ||
               (pFVar4 = (pFVar7->fields).KCMANELFDOC, pFVar4 == (FPLCEOJCPOD_o *)0x0))
            goto LAB_03143d54;
                    /* try { // try from 03143c50 to 03243c57 has its CatchHandler @ 03143c58 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03143c38 with catch @ 03143c58
                       catch(type#2 @ 00000000) { ... } // from try @ 03143c50 with catch @ 03143c58
                        */
            CJNHFNHJHPE = iVar3 + iVar2;
            bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                              (pFVar4,(System_String_o *)PMACBPAMPJA,
                               (int32_t *)((long)&local_68 + 4),true,false,(MethodInfo *)0x0);
            if (bVar1) {
              local_58[0] = true;
              CJNHFNHJHPE = local_68._4_4_ + CJNHFNHJHPE;
            }
            local_68 = (ulong)local_68._4_4_ << 0x20;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pFVar7 = MGNPHCAAEIO_TypeInfo->static_fields->ICAEAIGLLPE;
            if ((pFVar7 == (FNEMMDECEIJ_o *)0x0) ||
               (pFVar4 = (pFVar7->fields).KCMANELFDOC, pFVar4 == (FPLCEOJCPOD_o *)0x0))
            goto LAB_03143d54;
            bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                              (pFVar4,(System_String_o *)PMACBPAMPJA,(int32_t *)&local_68,true,false
                               ,(MethodInfo *)0x0);
            if (bVar1) {
              iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 (__this->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
              local_58[0] = true;
              CJNHFNHJHPE = CJNHFNHJHPE + (int)local_68 * iVar2;
LAB_03143ce4:
              pFVar4 = (__this->fields).ACHJNNOKEDK;
              if (pFVar4 != (FPLCEOJCPOD_o *)0x0) goto LAB_03143cf8;
              goto LAB_03143d54;
            }
            if (local_58[0] != false) goto LAB_03143ce4;
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,index,
                                Method_System_Collections_Generic_List<IHDFIJGDCBL>_get_Item__);
            if (pIVar5 == (Il2CppObject *)0x0) goto LAB_03143d54;
            if (*(char *)((long)&pIVar5[2].monitor + 7) == '\0') goto LAB_03143ce4;
          }
          index = index + 1;
        } while (index < (__this_00->fields)._size);
      }
      return;
    }
  }
LAB_03143d54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

