// IIMNGGHGKOD$$BNNIDPDMOIL @ RVA 0x34D2DF4

bool IIMNGGHGKOD__BNNIDPDMOIL
               (IIMNGGHGKOD_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,OLKKAIFGGAK_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  NJPBHDMCLIN_o *__this_00;
  PJKHAJKEHEL_o *pPVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  System_Nullable_bool__Fields local_34 [2];
  
  if ((DAT_045686c4 & 1) == 0) {
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<IENLNOEDCFF>__);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_045686c4 = 1;
  }
  bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).KDIMDBHMBEM,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<IENLNOEDCFF>__);
  if (bVar1) {
    return true;
  }
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (pOVar2 = OLKKAIFGGAK__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0),
     pOVar2 != (OLKKAIFGGAK_o *)0x0)) {
    local_34[0] = (System_Nullable_bool__Fields)
                  OLKKAIFGGAK__MNCGKCOBAGC(pOVar2,NLEBDPHNIDI,__this,(MethodInfo *)0x0);
    if (((ushort)local_34[0] & 0xff) != 0) {
      bVar1 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_34,0),
                         Method_System_Nullable<bool>_get_Value__);
      return bVar1;
    }
    __this_00 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
    NJPBHDMCLIN___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (NJPBHDMCLIN_o *)0x0) {
      (__this_00->fields).GGIGKNJPODI = BCKBBGCOMJD;
      thunk_FUN_01c20e04(&__this_00->fields,BCKBBGCOMJD);
      pPVar3 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
      if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
        pSVar4 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
                 (*(pPVar3->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                           (pPVar3,(pPVar3->klass->vtable)._5_ACBMLHJIFMD.method);
        (__this_00->fields).GFBNJPMOEKD = pSVar4;
        thunk_FUN_01c20e04();
        pOVar2 = OLKKAIFGGAK__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0);
        if ((pOVar2 != (OLKKAIFGGAK_o *)0x0) &&
           (pPVar3 = (pOVar2->fields).FAPMJJBOFEF, pPVar3 != (PJKHAJKEHEL_o *)0x0)) {
          pSVar5 = PJKHAJKEHEL__BMDDFABHHCA(pPVar3,(MethodInfo *)0x0);
          (__this_00->fields).OOFILGKHDDI = pSVar5;
          thunk_FUN_01c20e04();
          pOVar2 = OLKKAIFGGAK__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0);
          if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
            pOVar2 = (pOVar2->fields).BPJMMBGIMNC;
            if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
              pSVar5 = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
            }
            else {
              pPVar3 = (pOVar2->fields).FAPMJJBOFEF;
              if (pPVar3 == (PJKHAJKEHEL_o *)0x0) goto LAB_035d2fe0;
              pSVar5 = PJKHAJKEHEL__BMDDFABHHCA(pPVar3,(MethodInfo *)0x0);
            }
            (__this_00->fields).GIIIBDMEPDK = pSVar5;
            thunk_FUN_01c20e04(&(__this_00->fields).GIIIBDMEPDK);
            if (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) {
              bVar1 = ECENNHNBAME__PCPBHJGAOOH
                                (NLEBDPHNIDI,__this_00,(__this->fields).KDIMDBHMBEM,
                                 (KJFPGDFNFCL_o *)0x0,(MethodInfo *)0x0);
              pOVar2 = OLKKAIFGGAK__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0);
              if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
                OLKKAIFGGAK__ICGKMPNIPKC(pOVar2,NLEBDPHNIDI,__this,bVar1,(MethodInfo *)0x0);
                return bVar1;
              }
            }
          }
        }
      }
    }
  }
LAB_035d2fe0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

