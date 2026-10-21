// TypeDefIndex 808
// Namespace: 
// public class BMBCEECINLK
// Fields:
//   private readonly Vector3f MCCCKHBAMIK; // 0x10
//   private readonly Vector3f OCOEMEDJAIM; // 0x18
//   private float GBLGEHNKFEN; // 0x20
//   private float BLOKLBJAKHF; // 0x24
//   private float NECHGFKBACK; // 0x28
//   private int JCIDLNABHMN; // 0x2C

// ===== private void GJMIMFMNMIF(Vector3f OABGKLEHAGB, Vector3f DHFFBJLAEGD, Vector3f APJMFJIPLPO, int DFIBGGDJPLM, List<Vector3f> KENFFDHLNDA)  [RVA 0x3073738]
// BMBCEECINLK$$GJMIMFMNMIF @ RVA 0x3073738

void BMBCEECINLK__GJMIMFMNMIF
               (BMBCEECINLK_o *__this,Vector3f_o *OABGKLEHAGB,Vector3f_o *DHFFBJLAEGD,
               Vector3f_o *APJMFJIPLPO,int32_t DFIBGGDJPLM,
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
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<Vector3f>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_set_Item__);
    DAT_04565f91 = 1;
  }
  if (KENFFDHLNDA != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) {
    iVar2 = (KENFFDHLNDA->fields)._size;
    fVar8 = (__this->fields).BLOKLBJAKHF;
    if (iVar2 != DFIBGGDJPLM) {
      DJNBJHPDKDP__LJCDLMMMOGD<object>
                ((System_Collections_Generic_List_T__o *)KENFFDHLNDA,DFIBGGDJPLM,
                 Method_DJNBJHPDKDP_LJCDLMMMOGD<Vector3f>__);
      if (0 < DFIBGGDJPLM) {
        iVar2 = 0;
        do {
          pIVar1 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,iVar2,
                              Method_System_Collections_Generic_List<Vector3f>_get_Item__);
          if (pIVar1 == (Il2CppObject *)0x0) {
            __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
            PKHLGDMJPMF___ctor(__this_00,0.0,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&__this_00[1].klass = 0;
            (__this_00->fields).OHHDBINAJCB = 0.0;
            (__this_00->fields).JOLEIODMLFL = 0.0;
            System_Collections_Generic_List<object>__set_Item
                      ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,iVar2,
                       (Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_List<Vector3f>_set_Item__);
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
                            Method_System_Collections_Generic_List<Vector3f>_get_Item__);
        if ((OABGKLEHAGB == (Vector3f_o *)0x0) || (DHFFBJLAEGD == (Vector3f_o *)0x0))
        goto LAB_0317395c;
        if ((APJMFJIPLPO == (Vector3f_o *)0x0) || (pIVar1 == (Il2CppObject *)0x0))
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


// ===== public void GIMAJOGGBHM(int DFIBGGDJPLM)  [RVA 0x30739DC]
// BMBCEECINLK$$GIMAJOGGBHM @ RVA 0x30739DC

void BMBCEECINLK__GIMAJOGGBHM(BMBCEECINLK_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 / (float)DFIBGGDJPLM;
  fVar1 = -fVar2 / (float)DFIBGGDJPLM;
  (__this->fields).JCIDLNABHMN = DFIBGGDJPLM;
  (__this->fields).BLOKLBJAKHF = fVar1;
  (__this->fields).NECHGFKBACK = -fVar1 - fVar1;
  (__this->fields).GBLGEHNKFEN = fVar2 + fVar2;
  return;
}


// ===== public void .ctor(int DFIBGGDJPLM)  [RVA 0x3073A0C]
// BMBCEECINLK$$.ctor @ RVA 0x3073A0C

void BMBCEECINLK___ctor(BMBCEECINLK_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  Vector3f_o **ppCVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04565f92 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565f92 = 1;
  }
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)pCVar1,0.0,0.0,(MethodInfo *)0x0);
  (pCVar1->fields).PPOPAMHBMGG = 0.0;
  (pCVar1->fields).super.OHHDBINAJCB = 0.0;
  (pCVar1->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).MCCCKHBAMIK = pCVar1;
  thunk_FUN_01c20e04(&__this->fields,pCVar1);
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)pCVar1,0.0,0.0,(MethodInfo *)0x0);
  (pCVar1->fields).PPOPAMHBMGG = 0.0;
  (pCVar1->fields).super.OHHDBINAJCB = 0.0;
  (pCVar1->fields).super.JOLEIODMLFL = 0.0;
  ppCVar2 = &(__this->fields).OCOEMEDJAIM;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  fVar4 = 1.0 / (float)DFIBGGDJPLM;
  fVar3 = -fVar4 / (float)DFIBGGDJPLM;
  (__this->fields).JCIDLNABHMN = DFIBGGDJPLM;
  (__this->fields).BLOKLBJAKHF = fVar3;
  (__this->fields).NECHGFKBACK = -fVar3 - fVar3;
  (__this->fields).GBLGEHNKFEN = fVar4 + fVar4;
  return;
}


// ===== public void APNHOODIJNO(Vector3f FCPALKBOIFD, Vector3f KMCNNACKBFO, Vector3f IHNDAEJMGFP, List<Vector3f> KENFFDHLNDA)  [RVA 0x3073B04]
// BMBCEECINLK$$APNHOODIJNO @ RVA 0x3073B04

void BMBCEECINLK__APNHOODIJNO
               (BMBCEECINLK_o *__this,Vector3f_o *FCPALKBOIFD,Vector3f_o *KMCNNACKBFO,
               Vector3f_o *IHNDAEJMGFP,
               System_Collections_Generic_List_CNDPAJOLKFN__o *KENFFDHLNDA,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  
  pCVar1 = (__this->fields).MCCCKHBAMIK;
  if (pCVar1 != (Vector3f_o *)0x0) {
    method_00 = (MethodInfo *)IHNDAEJMGFP;
    Vector3f__CPKBJPIHPCL(pCVar1,FCPALKBOIFD,KMCNNACKBFO,(MethodInfo *)IHNDAEJMGFP);
    pCVar1 = (__this->fields).OCOEMEDJAIM;
    if (pCVar1 != (Vector3f_o *)0x0) {
      Vector3f__CPKBJPIHPCL(pCVar1,KMCNNACKBFO,IHNDAEJMGFP,method_00);
      BMBCEECINLK__GJMIMFMNMIF
                (__this,(__this->fields).MCCCKHBAMIK,KMCNNACKBFO,(__this->fields).OCOEMEDJAIM,
                 (__this->fields).JCIDLNABHMN,KENFFDHLNDA,in_x6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3073BC0]
// BMBCEECINLK$$.ctor @ RVA 0x3073BC0

void BMBCEECINLK___ctor(BMBCEECINLK_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  BMBCEECINLK___ctor(__this,0,in_x2);
  return;
}

