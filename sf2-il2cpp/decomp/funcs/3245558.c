// CHDGOFBHAFI$$ECOKPPHJIIH @ RVA 0x3245558

void CHDGOFBHAFI__ECOKPPHJIIH(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  AADKBCFCLKK_o *pAVar4;
  long lVar5;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar6;
  HCKCBFOGMMJ_o *__this_01;
  System_String_o *pSVar7;
  System_String_array *values;
  UnityEngine_Object_o *x;
  FCJBEKHDLAF_o *__this_02;
  undefined4 local_24;
  
  if ((DAT_045670b5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_10909);
    FUN_01bab630(&StringLiteral_88);
    FUN_01bab630(&StringLiteral_10910);
    DAT_045670b5 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
LAB_03345908:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    pIVar3 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03345908;
    pAVar4 = (__this->fields).AABMLCNHHPN;
    if (pAVar4 != (AADKBCFCLKK_o *)0x0) {
      (pAVar4->fields).LHFLMBNKPHF = (KDADMJGPAOM_o *)pIVar3[2].klass;
      thunk_FUN_01c20e04();
    }
    if ((__this->fields).CMDMECMFCIK == 2) {
      lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01b81620();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01b81620();
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          __this_02 = *(FCJBEKHDLAF_o **)(**(long **)(lVar5 + 0xb8) + 0x90);
          if ((__this_02 == (FCJBEKHDLAF_o *)0x0) ||
             (iVar2 = FCJBEKHDLAF__IHMLDBDLJON(__this_02,(MethodInfo *)0x0), iVar2 != 0x14)) {
            values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
            if (values != (System_String_array *)0x0) {
              if ((int)values->max_length != 0) {
                values->m_Items[0] = StringLiteral_10909;
                thunk_FUN_01c20e04(values->m_Items);
                local_24 = *(undefined4 *)&pIVar3[2].monitor;
                pSVar7 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                if (1 < (uint)values->max_length) {
                  values->m_Items[1] = pSVar7;
                  thunk_FUN_01c20e04(values->m_Items + 1,pSVar7);
                  if (2 < (uint)values->max_length) {
                    values->m_Items[2] = StringLiteral_167;
                    thunk_FUN_01c20e04();
                    if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_03345908;
                    local_24 = *(undefined4 *)&((pIVar3[2].klass)->_1).namespaze;
                    pSVar7 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                    if (3 < (uint)values->max_length) {
                      values->m_Items[3] = pSVar7;
                      thunk_FUN_01c20e04(values->m_Items + 3,pSVar7);
                      if (4 < (uint)values->max_length) {
                        values->m_Items[4] = StringLiteral_88;
                        thunk_FUN_01c20e04();
                        pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
                        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                        }
                        UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
          else {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
              iVar6 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
              if (pIVar3[1].monitor != (void *)0x0) {
                if (iVar6 == *(long *)((long)pIVar3[1].monitor + 0x18)) {
                  return;
                }
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                if ((pIVar3[1].monitor != (void *)0x0) && (__this_01 != (HCKCBFOGMMJ_o *)0x0)) {
                  pSVar7 = HCKCBFOGMMJ__OKJEEFHMCCD
                                     (__this_01,*(int64_t *)((long)pIVar3[1].monitor + 0x18),true,
                                      (MethodInfo *)0x0);
                  if (pIVar3[2].klass != (Il2CppClass *)0x0) {
                    FCJBEKHDLAF__PKHKLAJCKDM
                              (__this_02,pSVar7,*(int32_t *)&pIVar3[2].monitor,
                               *(int32_t *)((long)&((pIVar3[2].klass)->_1).namespaze + 4),
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto LAB_03345908;
      }
    }
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10910,(MethodInfo *)0x0);
  }
  return;
}

