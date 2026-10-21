// ACHLOMELAJE$$BDAMDFLLEAM @ RVA 0x3068514

bool ACHLOMELAJE__BDAMDFLLEAM(ACHLOMELAJE_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar3;
  System_Predicate_T__o *pSVar4;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_List_BDGPPPPKHEC__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  
  if ((DAT_04565f0a & 1) == 0) {
    FUN_01bab630(&Method_ACHLOMELAJE_GOANPADALEG_ICKACMJPOLK__);
    FUN_01bab630(&Method_ACHLOMELAJE_GOANPADALEG_OEKODHMHCAD__);
    FUN_01bab630(&ACHLOMELAJE_GOANPADALEG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDGPPPPKHEC>_Find__);
    FUN_01bab630(&System_Predicate<BDGPPPPKHEC>_TypeInfo);
    FUN_01bab630(&System_Predicate<string>_TypeInfo);
    DAT_04565f0a = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(ACHLOMELAJE_GOANPADALEG_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].monitor = CNIELFLIKJB;
    thunk_FUN_01c20e04(&pIVar2[1].monitor,CNIELFLIKJB);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if ((__this_00 != (EGMONPGHHDP_o *)0x0) &&
       (pJVar3 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0),
       pJVar3 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) {
      pIVar2[1].klass = (Il2CppClass *)(pJVar3->fields).JIJLBFGKNJK;
      thunk_FUN_01c20e04();
      __this_01 = (__this->fields).BCLNBJNEAAF;
      pSVar4 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<BDGPPPPKHEC>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_BDGPPPPKHEC__o *)0x0) {
        pIVar2 = System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_01,pSVar4,
                            Method_System_Collections_Generic_List<BDGPPPPKHEC>_Find__);
        if (pIVar2 != (Il2CppObject *)0x0) {
          __this_02 = pIVar2[1].monitor;
          pSVar4 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<string>_TypeInfo);
          System_Predicate<object>___ctor();
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031686d0;
          CJNHFNHJHPE = (System_String_o *)
                        System_Collections_Generic_List<object>__Find
                                  (__this_02,pSVar4,
                                   Method_System_Collections_Generic_List<string>_Find__);
          bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
          if (!bVar1) {
            return true;
          }
        }
        return false;
      }
    }
  }
LAB_031686d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

