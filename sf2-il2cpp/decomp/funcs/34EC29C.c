// OLKKAIFGGAK$$MBPMJDLCCDF @ RVA 0x34EC29C

void OLKKAIFGGAK__MBPMJDLCCDF(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  uint PLHMJPCKGHI;
  ECENNHNBAME_o *__this_00;
  GBKCLIFGIFN_o *pGVar1;
  OPNFCOGALLI_o *pOVar2;
  ECENNHNBAME_o **ppEVar3;
  IPCACEBFONO_o *__this_01;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  OLKKAIFGGAK_o *IFCJAOGIPJE;
  System_String_o *pSVar6;
  NGKBNOEJLPH_o *__this_02;
  NKOIBKNPICN_o *HBIFOEHOGPH;
  MethodInfo *method_00;
  
  if ((DAT_04568795 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_21403);
    FUN_01bab630(&StringLiteral_19731);
    DAT_04568795 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).FNEAAHOOHAA == (NJPBHDMCLIN_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_19731,(MethodInfo *)0x0);
    method_01 = extraout_x1_01;
  }
  else {
    IFCJAOGIPJE = (__this->fields).BPJMMBGIMNC;
    __this_02 = (__this->fields).ADGFKAPOIFN;
    PLHMJPCKGHI = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).LNMIHJNAEAF.fields,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(ulong)PLHMJPCKGHI;
    if (__this_02 == (NGKBNOEJLPH_o *)0x0) goto LAB_035ec43c;
    __this_00 = NGKBNOEJLPH__BDHAMOEKNNK(__this_02,IFCJAOGIPJE,PLHMJPCKGHI,(MethodInfo *)0x0);
    method_01 = extraout_x1_00;
    if (__this_00 != (ECENNHNBAME_o *)0x0) {
      pGVar1 = ECENNHNBAME__OCLGKBPDEBI(__this_00,(MethodInfo *)0x0);
      if (pGVar1 == (GBKCLIFGIFN_o *)0x0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args != (System_Object_array *)0x0) {
          pSVar6 = (__this_00->fields).JIJLBFGKNJK;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) {
            uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar5,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = (Il2CppObject *)pSVar6;
            thunk_FUN_01c20e04(args->m_Items,pSVar6);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_21403,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
      else {
        pOVar2 = (__this->fields).OAKOFJJIOFF;
        if (pOVar2 != (OPNFCOGALLI_o *)0x0) {
          HBIFOEHOGPH = (pGVar1->fields).LCDJLCMFMEO;
          ppEVar3 = &(pOVar2->fields).FFIBKLFJKAO;
          *ppEVar3 = __this_00;
          thunk_FUN_01c20e04(ppEVar3,__this_00);
          if (HBIFOEHOGPH != (NKOIBKNPICN_o *)0x0) {
            (HBIFOEHOGPH->fields).PBPNNKNICEE = true;
            OLKKAIFGGAK__CBGCMJCJJKP(__this,HBIFOEHOGPH,method_00);
            return;
          }
        }
      }
      goto LAB_035ec43c;
    }
  }
  __this_01 = (__this->fields).IAKDMKJIBBG;
  if (__this_01 != (IPCACEBFONO_o *)0x0) {
    IPCACEBFONO__DGLJCGNHLIG(__this_01,method_01);
    return;
  }
LAB_035ec43c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

