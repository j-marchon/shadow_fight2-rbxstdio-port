// BMBCEECINLK$$GJMIMFMNMIF @ RVA 0x3073738

void BMBCEECINLK__GJMIMFMNMIF
               (BMBCEECINLK_o *__this,CNDPAJOLKFN_o *OABGKLEHAGB,CNDPAJOLKFN_o *DHFFBJLAEGD,
               CNDPAJOLKFN_o *APJMFJIPLPO,int32_t DFIBGGDJPLM,
               System_Collections_Generic_List_CNDPAJOLKFN__o *KENFFDHLNDA,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  PKHLGDMJPMF_o *__this_00;
  int index;
  int iVar2;
  float fVar3;
  PKHLGDMJPMF_Fields PVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04565f91 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_set_Item__);
    DAT_04565f91 = 1;
  }
  if (KENFFDHLNDA != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) {
    iVar2 = (KENFFDHLNDA->fields)._size;
    fVar8 = (__this->fields).BLOKLBJAKHF;
    if (iVar2 != DFIBGGDJPLM) {
      DJNBJHPDKDP__LJCDLMMMOGD<object>
                ((System_Collections_Generic_List_T__o *)KENFFDHLNDA,DFIBGGDJPLM,
                 Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
      if (0 < DFIBGGDJPLM) {
        iVar2 = 0;
        do {
          pIVar1 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,iVar2,
                              Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
          if (pIVar1 == (Il2CppObject *)0x0) {
            __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
            PKHLGDMJPMF___ctor(__this_00,0.0,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&__this_00[1].klass = 0;
            (__this_00->fields).OHHDBINAJCB = 0.0;
            (__this_00->fields).JOLEIODMLFL = 0.0;
            System_Collections_Generic_List<object>__set_Item
                      ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,iVar2,
                       (Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_List<CNDPAJOLKFN>_set_Item__);
          }
          iVar2 = iVar2 + 1;
        } while (DFIBGGDJPLM != iVar2);
      }
      iVar2 = (KENFFDHLNDA->fields)._size;
    }
    if (0 < iVar2) {
      index = 0;
      fVar5 = 0.0;
      fVar6 = 1.0;
      fVar7 = 0.0;
      do {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,index,
                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        if ((OABGKLEHAGB == (CNDPAJOLKFN_o *)0x0) || (DHFFBJLAEGD == (CNDPAJOLKFN_o *)0x0))
        goto LAB_0317395c;
        if ((APJMFJIPLPO == (CNDPAJOLKFN_o *)0x0) || (pIVar1 == (Il2CppObject *)0x0))
        goto LAB_0317395c;
        fVar8 = fVar8 + (__this->fields).NECHGFKBACK;
        fVar3 = (__this->fields).GBLGEHNKFEN - fVar8;
        fVar6 = fVar6 - fVar3;
        fVar5 = fVar5 + (fVar3 - fVar8);
        PVar4 = (APJMFJIPLPO->fields).super;
        fVar7 = fVar7 + fVar8;
        pIVar1[1].klass =
             (Il2CppClass *)
             CONCAT44((OABGKLEHAGB->fields).super.JOLEIODMLFL * fVar6 +
                      (DHFFBJLAEGD->fields).super.JOLEIODMLFL * fVar5 + PVar4.JOLEIODMLFL * fVar7,
                      (OABGKLEHAGB->fields).super.OHHDBINAJCB * fVar6 +
                      (DHFFBJLAEGD->fields).super.OHHDBINAJCB * fVar5 + PVar4.OHHDBINAJCB * fVar7);
        index = index + 1;
        *(float *)&pIVar1[1].monitor =
             fVar6 * (OABGKLEHAGB->fields).PPOPAMHBMGG + fVar5 * (DHFFBJLAEGD->fields).PPOPAMHBMGG +
             fVar7 * (APJMFJIPLPO->fields).PPOPAMHBMGG;
      } while (iVar2 != index);
    }
    return;
  }
LAB_0317395c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

