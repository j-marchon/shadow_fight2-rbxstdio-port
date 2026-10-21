// TypeDefIndex 2058
// Namespace: 
// public class KHEDNGODOIC
// Fields:
//   private GameObject LDAKOINICNJ; // 0x10
//   private readonly PKNBJJPHAKI BAFJNPPPBMK; // 0x18
//   private ENOJCLHOINK HGCEPEBIDFB; // 0x20
//   private ENOJCLHOINK FBGFDHMKFKI; // 0x28

// ===== public PKNBJJPHAKI KLOHNEKNDBL()  [RVA 0x32B70C8]
// KHEDNGODOIC$$KLOHNEKNDBL @ RVA 0x32B70C8

PKNBJJPHAKI_o * KHEDNGODOIC__KLOHNEKNDBL(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  return (__this->fields).BAFJNPPPBMK;
}


// ===== public void DFLHLNGDGEP(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x32B70D0]
// KHEDNGODOIC$$DFLHLNGDGEP @ RVA 0x32B70D0

void KHEDNGODOIC__DFLHLNGDGEP(KHEDNGODOIC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  System_Action_HDBPKHNKOGI__o *CJNHFNHJHPE;
  System_Action_HPNBNJKDGLB__o *CJNHFNHJHPE_00;
  System_Action_IHHNAHGMKIJ__o *CJNHFNHJHPE_01;
  
  if ((DAT_0456745d & 1) == 0) {
    FUN_01bab630(&System_Action<HDBPKHNKOGI>_TypeInfo);
    FUN_01bab630(&System_Action<IHHNAHGMKIJ>_TypeInfo);
    FUN_01bab630(&System_Action<HPNBNJKDGLB>_TypeInfo);
    FUN_01bab630(&Method_KHEDNGODOIC_FIIEDDDMOJA__);
    FUN_01bab630(&Method_KHEDNGODOIC_GLCKMBOPDGP__);
    FUN_01bab630(&Method_KHEDNGODOIC_NDANNAMFOID__);
    DAT_0456745d = 1;
  }
  CJNHFNHJHPE = (System_Action_HDBPKHNKOGI__o *)
                thunk_FUN_01bda818(System_Action<HDBPKHNKOGI>_TypeInfo);
  System_Action<object>___ctor();
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__FDLGJLONHGD(BCKBBGCOMJD,CJNHFNHJHPE,(MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         (System_Action_HPNBNJKDGLB__o *)thunk_FUN_01bda818(System_Action<HPNBNJKDGLB>_TypeInfo);
    System_Action<object>___ctor();
    OLKKAIFGGAK__CHBDNEEIDMN(BCKBBGCOMJD,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    CJNHFNHJHPE_01 =
         (System_Action_IHHNAHGMKIJ__o *)thunk_FUN_01bda818(System_Action<IHHNAHGMKIJ>_TypeInfo);
    System_Action<object>___ctor();
    OLKKAIFGGAK__FEEGNCPCCPD(BCKBBGCOMJD,CJNHFNHJHPE_01,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIIEDDDMOJA(HDBPKHNKOGI CPECAEHDDDB)  [RVA 0x32B7210]
// KHEDNGODOIC$$FIIEDDDMOJA @ RVA 0x32B7210

void KHEDNGODOIC__FIIEDDDMOJA(KHEDNGODOIC_o *__this,HDBPKHNKOGI_o *CPECAEHDDDB,MethodInfo *method)

{
  ENOJCLHOINK_o *__this_00;
  
  if (CPECAEHDDDB != (HDBPKHNKOGI_o *)0x0) {
    if ((CPECAEHDDDB->fields).PKPOHCOEHEN == false) {
      __this_00 = (__this->fields).FBGFDHMKFKI;
    }
    else {
      __this_00 = (__this->fields).HGCEPEBIDFB;
    }
    if (__this_00 != (ENOJCLHOINK_o *)0x0) {
      ENOJCLHOINK__FMFGOCKCEPI(__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNLNLFDOGPM(float IDBMGJFGIJH)  [RVA 0x32B7240]
// KHEDNGODOIC$$HNLNLFDOGPM @ RVA 0x32B7240

void KHEDNGODOIC__HNLNLFDOGPM(KHEDNGODOIC_o *__this,float IDBMGJFGIJH,MethodInfo *method)

{
  PKNBJJPHAKI_o *pPVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  
  pPVar1 = (__this->fields).BAFJNPPPBMK;
  if (pPVar1 != (PKNBJJPHAKI_o *)0x0) {
    PKNBJJPHAKI__GIENGNEGHPJ(pPVar1,IDBMGJFGIJH,(MethodInfo *)0x0);
    pPVar1 = (__this->fields).BAFJNPPPBMK;
    if ((pPVar1 != (PKNBJJPHAKI_o *)0x0) &&
       (pUVar2 = (pPVar1->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).LDAKOINICNJ;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
        pPVar1 = (__this->fields).BAFJNPPPBMK;
        if (((pPVar1 != (PKNBJJPHAKI_o *)0x0) &&
            (pUVar2 = (pPVar1->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JGDMBLPAHIN(float IDBMGJFGIJH)  [RVA 0x32B72E0]
// KHEDNGODOIC$$JGDMBLPAHIN @ RVA 0x32B72E0

void KHEDNGODOIC__JGDMBLPAHIN(KHEDNGODOIC_o *__this,float IDBMGJFGIJH,MethodInfo *method)

{
  ENOJCLHOINK_o *pEVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  MethodInfo *extraout_x1;
  ENOJCLHOINK_o **ppEVar5;
  
  if ((DAT_0456745e & 1) == 0) {
    FUN_01bab630(&ENOJCLHOINK_TypeInfo);
    DAT_0456745e = 1;
    method = extraout_x1;
  }
  pEVar1 = (ENOJCLHOINK_o *)thunk_FUN_01bda818(ENOJCLHOINK_TypeInfo,method);
  ENOJCLHOINK___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar5 = &(__this->fields).HGCEPEBIDFB;
  *ppEVar5 = pEVar1;
  thunk_FUN_01c20e04(ppEVar5,pEVar1);
  if (*ppEVar5 != (ENOJCLHOINK_o *)0x0) {
    ENOJCLHOINK__HLAKMKPFDAC(*ppEVar5,IDBMGJFGIJH,(MethodInfo *)0x0);
    if ((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
       (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).LDAKOINICNJ;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,pUVar4,false,(MethodInfo *)0x0);
        if (((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
            (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0))
           && (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
              pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0x3c23d70a) << 0x40),(MethodInfo *)0x0);
          pEVar1 = (ENOJCLHOINK_o *)thunk_FUN_01bda818(ENOJCLHOINK_TypeInfo);
          ENOJCLHOINK___ctor(pEVar1,(MethodInfo *)0x0);
          ppEVar5 = &(__this->fields).FBGFDHMKFKI;
          *ppEVar5 = pEVar1;
          thunk_FUN_01c20e04(ppEVar5,pEVar1);
          if (*ppEVar5 != (ENOJCLHOINK_o *)0x0) {
            ENOJCLHOINK__HLAKMKPFDAC(*ppEVar5,IDBMGJFGIJH,(MethodInfo *)0x0);
            if ((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
               (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0
               )) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).LDAKOINICNJ;
              if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar3,pUVar4,false,(MethodInfo *)0x0);
                if (((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
                    (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ,
                    pUVar2 != (UnityEngine_GameObject_o *)0x0)) &&
                   (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0xbc23d70a) << 0x40),
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GameObject IJGHEOJPJLH()  [RVA 0x32B74A4]
// KHEDNGODOIC$$IJGHEOJPJLH @ RVA 0x32B74A4

UnityEngine_GameObject_o * KHEDNGODOIC__IJGHEOJPJLH(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  return (__this->fields).LDAKOINICNJ;
}


// ===== public void BALEGGJGENM(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x32B74AC]
// KHEDNGODOIC$$BALEGGJGENM @ RVA 0x32B74AC

void KHEDNGODOIC__BALEGGJGENM(KHEDNGODOIC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  System_Action_HDBPKHNKOGI__o *CJNHFNHJHPE;
  System_Action_HPNBNJKDGLB__o *CJNHFNHJHPE_00;
  System_Action_IHHNAHGMKIJ__o *CJNHFNHJHPE_01;
  
  if ((DAT_0456745f & 1) == 0) {
    FUN_01bab630(&System_Action<HDBPKHNKOGI>_TypeInfo);
    FUN_01bab630(&System_Action<IHHNAHGMKIJ>_TypeInfo);
    FUN_01bab630(&System_Action<HPNBNJKDGLB>_TypeInfo);
    FUN_01bab630(&Method_KHEDNGODOIC_FIIEDDDMOJA__);
    FUN_01bab630(&Method_KHEDNGODOIC_GLCKMBOPDGP__);
    FUN_01bab630(&Method_KHEDNGODOIC_NDANNAMFOID__);
    DAT_0456745f = 1;
  }
  CJNHFNHJHPE = (System_Action_HDBPKHNKOGI__o *)
                thunk_FUN_01bda818(System_Action<HDBPKHNKOGI>_TypeInfo);
  System_Action<object>___ctor();
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__JLNJODKNKLB(BCKBBGCOMJD,CJNHFNHJHPE,(MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         (System_Action_HPNBNJKDGLB__o *)thunk_FUN_01bda818(System_Action<HPNBNJKDGLB>_TypeInfo);
    System_Action<object>___ctor();
    OLKKAIFGGAK__EAJONHEFHGO(BCKBBGCOMJD,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    CJNHFNHJHPE_01 =
         (System_Action_IHHNAHGMKIJ__o *)thunk_FUN_01bda818(System_Action<IHHNAHGMKIJ>_TypeInfo);
    System_Action<object>___ctor();
    OLKKAIFGGAK__OIDFEMAMMFI(BCKBBGCOMJD,CJNHFNHJHPE_01,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDANNAMFOID(HPNBNJKDGLB CPECAEHDDDB)  [RVA 0x32B75EC]
// KHEDNGODOIC$$NDANNAMFOID @ RVA 0x32B75EC

void KHEDNGODOIC__NDANNAMFOID(KHEDNGODOIC_o *__this,HPNBNJKDGLB_o *CPECAEHDDDB,MethodInfo *method)

{
  ENOJCLHOINK_o *pEVar1;
  
  pEVar1 = (__this->fields).HGCEPEBIDFB;
  if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
    ENOJCLHOINK__AJCKLGJGBKD(pEVar1,CPECAEHDDDB,(MethodInfo *)0x0);
    pEVar1 = (__this->fields).FBGFDHMKFKI;
    if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
      ENOJCLHOINK__AJCKLGJGBKD(pEVar1,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AAMNFFKFNBA()  [RVA 0x32B762C]
// KHEDNGODOIC$$AAMNFFKFNBA @ RVA 0x32B762C

void KHEDNGODOIC__AAMNFFKFNBA(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  ENOJCLHOINK_o *pEVar1;
  
  pEVar1 = (__this->fields).HGCEPEBIDFB;
  if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
    ENOJCLHOINK__AAICFBHOPJK(pEVar1,(MethodInfo *)0x0);
    pEVar1 = (__this->fields).FBGFDHMKFKI;
    if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
      ENOJCLHOINK__AAICFBHOPJK(pEVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GLCKMBOPDGP(IHHNAHGMKIJ CPECAEHDDDB)  [RVA 0x32B765C]
// KHEDNGODOIC$$GLCKMBOPDGP @ RVA 0x32B765C

void KHEDNGODOIC__GLCKMBOPDGP(KHEDNGODOIC_o *__this,IHHNAHGMKIJ_o *CPECAEHDDDB,MethodInfo *method)

{
  ENOJCLHOINK_o *pEVar1;
  
  pEVar1 = (__this->fields).HGCEPEBIDFB;
  if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
    ENOJCLHOINK__BOMEBKKKKLG(pEVar1,CPECAEHDDDB,(MethodInfo *)0x0);
    pEVar1 = (__this->fields).FBGFDHMKFKI;
    if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
      ENOJCLHOINK__BOMEBKKKKLG(pEVar1,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ(NHBBOEHHEKG LBKOHHHPNIP)  [RVA 0x32B769C]
// KHEDNGODOIC$$GIENGNEGHPJ @ RVA 0x32B769C

void KHEDNGODOIC__GIENGNEGHPJ(KHEDNGODOIC_o *__this,NHBBOEHHEKG_o *LBKOHHHPNIP,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  MEHKKHFBNLM_o *pMVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o OCHLLMNLADJ;
  
  if (LBKOHHHPNIP != (NHBBOEHHEKG_o *)0x0) {
    KHEDNGODOIC__HNLNLFDOGPM(__this,(LBKOHHHPNIP->fields).IDBMGJFGIJH,(MethodInfo *)LBKOHHHPNIP);
    KHEDNGODOIC__JGDMBLPAHIN(__this,(LBKOHHHPNIP->fields).IDBMGJFGIJH,method_00);
    pUVar1 = (__this->fields).LDAKOINICNJ;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar5.fields.y = (LBKOHHHPNIP->fields).IDBMGJFGIJH + (LBKOHHHPNIP->fields).DAPHCPICAAC * -0.5;
      UVar5.fields.x = (LBKOHHHPNIP->fields).NMFKJBOAOLK * -0.5;
      UVar5.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar2,UVar5,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).LDAKOINICNJ;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pMVar4 = (LBKOHHHPNIP->fields).CLFNHGGJHCA;
        if (((pMVar4 != (MEHKKHFBNLM_o *)0x0) &&
            (pUVar1 = (pMVar4->fields)._KDDKJJLDFFO_k__BackingField,
            pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).LDAKOINICNJ;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).LDAKOINICNJ;
            if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_Transform_o *)0x0)) {
              UVar5 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
              OCHLLMNLADJ.fields.z = 1.0;
              OCHLLMNLADJ.fields.x = 1.0;
              OCHLLMNLADJ.fields.y = -1.0;
              UVar5 = Util__EFCELKPKECC(UVar5,OCHLLMNLADJ,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localScale(pUVar2,UVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32B77A4]
// KHEDNGODOIC$$.ctor @ RVA 0x32B77A4

void KHEDNGODOIC___ctor(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  PKNBJJPHAKI_o *__this_01;
  PKNBJJPHAKI_o **ppPVar1;
  
  if ((DAT_04567460 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&PKNBJJPHAKI_TypeInfo);
    FUN_01bab630(&StringLiteral_11220/*"RenderContainer"*/);
    DAT_04567460 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_11220/*"RenderContainer"*/,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (PKNBJJPHAKI_o *)thunk_FUN_01bda818(PKNBJJPHAKI_TypeInfo);
  PKNBJJPHAKI___ctor(__this_01,(MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).BAFJNPPPBMK;
  *ppPVar1 = __this_01;
  thunk_FUN_01c20e04(ppPVar1,__this_01);
  return;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x32B7868]
// KHEDNGODOIC$$NDNPGAKJLHM @ RVA 0x32B7868

void KHEDNGODOIC__NDNPGAKJLHM(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  PKNBJJPHAKI_o *__this_00;
  ENOJCLHOINK_o *pEVar1;
  
  __this_00 = (__this->fields).BAFJNPPPBMK;
  if (__this_00 != (PKNBJJPHAKI_o *)0x0) {
    PKNBJJPHAKI__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
    pEVar1 = (__this->fields).HGCEPEBIDFB;
    if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
      ENOJCLHOINK__OCPDLLNGGKL(pEVar1,(MethodInfo *)0x0);
      pEVar1 = (__this->fields).FBGFDHMKFKI;
      if (pEVar1 != (ENOJCLHOINK_o *)0x0) {
        ENOJCLHOINK__OCPDLLNGGKL(pEVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HFCJLBGBGPI()  [RVA 0x32B78A8]
// KHEDNGODOIC$$HFCJLBGBGPI @ RVA 0x32B78A8

void KHEDNGODOIC__HFCJLBGBGPI(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  ENOJCLHOINK_o *pEVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar3;
  
  if ((DAT_04567461 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<GLCAPECMBLM>__);
    DAT_04567461 = 1;
  }
  pEVar2 = (__this->fields).HGCEPEBIDFB;
  if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
  pSVar3 = ENOJCLHOINK__JHNLKBALFBK(pEVar2,true,(MethodInfo *)0x0);
  bVar1 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                     Method_System_Linq_Enumerable_Any<GLCAPECMBLM>__);
  if (bVar1) {
    pEVar2 = (__this->fields).HGCEPEBIDFB;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__DABOBFKFPKJ(pEVar2,pSVar3,(MethodInfo *)0x0);
    pEVar2 = (__this->fields).FBGFDHMKFKI;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__NDBCBDMBFON(pEVar2,pSVar3,(MethodInfo *)0x0);
  }
  pEVar2 = (__this->fields).FBGFDHMKFKI;
  if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
  pSVar3 = ENOJCLHOINK__JHNLKBALFBK(pEVar2,false,(MethodInfo *)0x0);
  bVar1 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                     Method_System_Linq_Enumerable_Any<GLCAPECMBLM>__);
  if (bVar1) {
    pEVar2 = (__this->fields).FBGFDHMKFKI;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__DABOBFKFPKJ(pEVar2,pSVar3,(MethodInfo *)0x0);
    pEVar2 = (__this->fields).HGCEPEBIDFB;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__NDBCBDMBFON(pEVar2,pSVar3,(MethodInfo *)0x0);
  }
  pEVar2 = (__this->fields).HGCEPEBIDFB;
  if (pEVar2 != (ENOJCLHOINK_o *)0x0) {
    ENOJCLHOINK__AAILGEMALAJ(pEVar2,(MethodInfo *)0x0);
    pEVar2 = (__this->fields).FBGFDHMKFKI;
    if (pEVar2 != (ENOJCLHOINK_o *)0x0) {
      ENOJCLHOINK__AAILGEMALAJ(pEVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033b799c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

