// EINKKMIHCHI$$CLKGKNCGJID @ RVA 0x34C7108

void EINKKMIHCHI__CLKGKNCGJID
               (EINKKMIHCHI_o *__this,System_String_o *KKJPPDNKGAI,int32_t HFELHFCLPJE,
               int32_t PKEAOHMFMFD,bool HLJOHNIDBDM,MethodInfo *method)

{
  int32_t steps;
  bool bVar1;
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Action_bool__o *callback;
  System_String_o *pSVar3;
  undefined8 *puVar4;
  GooglePlayGames_PlayGamesPlatform_o *__this_01;
  void **ppvVar5;
  
  if ((DAT_04568644 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo,KKJPPDNKGAI,HFELHFCLPJE,PKEAOHMFMFD);
    FUN_01bab630(&Method_EINKKMIHCHI_EDKNECAGMNM_IEBHMFJJMHK__);
    FUN_01bab630(&EINKKMIHCHI_EDKNECAGMNM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&StringLiteral_15417);
    FUN_01bab630(&StringLiteral_15416);
    DAT_04568644 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_EDKNECAGMNM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar5 = &__this_00[1].monitor;
    *ppvVar5 = KKJPPDNKGAI;
    thunk_FUN_01c20e04(ppvVar5,KKJPPDNKGAI);
    *(int32_t *)&__this_00[2].klass = HFELHFCLPJE;
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar2,*ppvVar5,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      if (!bVar1) {
        pSVar3 = *ppvVar5;
        puVar4 = &StringLiteral_15417;
LAB_035c7224:
        pSVar3 = System_String__Concat((System_String_o *)*puVar4,pSVar3,(MethodInfo *)0x0);
        NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar3,(MethodInfo *)0x0);
        return;
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar1 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar2,*ppvVar5,
                           Method_System_Collections_Generic_HashSet<string>_Contains__);
        if (bVar1) {
          if (!HLJOHNIDBDM) {
            return;
          }
          pSVar3 = *ppvVar5;
          puVar4 = &StringLiteral_15416;
          goto LAB_035c7224;
        }
        __this_01 = (__this->fields).GJOCPBIBFCD;
        pSVar3 = __this_00[1].monitor;
        steps = *(int32_t *)&__this_00[2].klass;
        callback = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
        System_Action<bool>___ctor();
        if (__this_01 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
          GooglePlayGames_PlayGamesPlatform__SetStepsAtLeast
                    (__this_01,pSVar3,steps,callback,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

