// TypeDefIndex 997
// Namespace: 
// public class BMMAPANJCEC
// Fields:
//   private readonly GNJBJKEJEGC EHENNILDPMD; // 0x10
//   private readonly GNJBJKEJEGC MEGGHJNADEN; // 0x18

// ===== public void NDNPGAKJLHM()  [RVA 0x30BCFFC]
// BMMAPANJCEC$$NDNPGAKJLHM @ RVA 0x30BCFFC

void BMMAPANJCEC__NDNPGAKJLHM(BMMAPANJCEC_o *__this,MethodInfo *method)

{
  GNJBJKEJEGC_o *pGVar1;
  
  pGVar1 = (__this->fields).EHENNILDPMD;
  if (pGVar1 != (GNJBJKEJEGC_o *)0x0) {
    GNJBJKEJEGC__NDNPGAKJLHM(pGVar1,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).MEGGHJNADEN;
    if (pGVar1 != (GNJBJKEJEGC_o *)0x0) {
      GNJBJKEJEGC__NDNPGAKJLHM(pGVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float KNMENIBLFGF(bool FOFCAILEKJD, string DCEMFAOHAFH)  [RVA 0x30BD02C]
// BMMAPANJCEC$$KNMENIBLFGF @ RVA 0x30BD02C

float BMMAPANJCEC__KNMENIBLFGF
                (BMMAPANJCEC_o *__this,bool FOFCAILEKJD,System_String_o *DCEMFAOHAFH,
                MethodInfo *method)

{
  long lVar1;
  GNJBJKEJEGC_o *__this_00;
  float fVar2;
  
  lVar1 = 0x10;
  if (!FOFCAILEKJD) {
    lVar1 = 0x18;
  }
  __this_00 = *(GNJBJKEJEGC_o **)((long)&__this->klass + lVar1);
  if (__this_00 != (GNJBJKEJEGC_o *)0x0) {
    fVar2 = GNJBJKEJEGC__KNMENIBLFGF(__this_00,DCEMFAOHAFH,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x30BD074]
// BMMAPANJCEC$$ToString @ RVA 0x30BD074

System_String_o * BMMAPANJCEC__ToString(BMMAPANJCEC_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  GNJBJKEJEGC_o *pGVar2;
  
  if ((DAT_04566258 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    DAT_04566258 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  pGVar2 = (__this->fields).EHENNILDPMD;
  if (pGVar2 == (GNJBJKEJEGC_o *)0x0) {
    pSVar1 = (System_String_o *)0x0;
  }
  else {
    pSVar1 = (System_String_o *)
             (*(pGVar2->klass->vtable)._3_ToString.methodPtr)
                       (pGVar2,(pGVar2->klass->vtable)._3_ToString.method);
  }
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar1;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_47/*"\n"*/;
        thunk_FUN_01c20e04();
        pGVar2 = (__this->fields).MEGGHJNADEN;
        if (pGVar2 == (GNJBJKEJEGC_o *)0x0) {
          pSVar1 = (System_String_o *)0x0;
        }
        else {
          pSVar1 = (System_String_o *)
                   (*(pGVar2->klass->vtable)._3_ToString.methodPtr)
                             (pGVar2,(pGVar2->klass->vtable)._3_ToString.method);
        }
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar1;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_47/*"\n"*/;
            thunk_FUN_01c20e04(values->m_Items + 3);
            pSVar1 = System_Object__ToString((Il2CppObject *)__this,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar1;
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private GNJBJKEJEGC AFDNKKOHJFM(bool FOFCAILEKJD)  [RVA 0x30BD05C]
// BMMAPANJCEC$$AFDNKKOHJFM @ RVA 0x30BD05C

GNJBJKEJEGC_o * BMMAPANJCEC__AFDNKKOHJFM(BMMAPANJCEC_o *__this,bool FOFCAILEKJD,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (!FOFCAILEKJD) {
    lVar1 = 0x18;
  }
  return *(GNJBJKEJEGC_o **)((long)&__this->klass + lVar1);
}


// ===== public void FOOHBJNHOKK(bool FOFCAILEKJD, string DCEMFAOHAFH, float CJNHFNHJHPE)  [RVA 0x30BD1D0]
// BMMAPANJCEC$$FOOHBJNHOKK @ RVA 0x30BD1D0

void BMMAPANJCEC__FOOHBJNHOKK
               (BMMAPANJCEC_o *__this,bool FOFCAILEKJD,System_String_o *DCEMFAOHAFH,
               float CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  GNJBJKEJEGC_o *__this_00;
  
  lVar1 = 0x10;
  if (!FOFCAILEKJD) {
    lVar1 = 0x18;
  }
  __this_00 = *(GNJBJKEJEGC_o **)((long)&__this->klass + lVar1);
  if (__this_00 != (GNJBJKEJEGC_o *)0x0) {
    GNJBJKEJEGC__FOOHBJNHOKK(__this_00,DCEMFAOHAFH,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30BD200]
// BMMAPANJCEC$$.ctor @ RVA 0x30BD200

void BMMAPANJCEC___ctor(BMMAPANJCEC_o *__this,MethodInfo *method)

{
  GNJBJKEJEGC_o *pGVar1;
  GNJBJKEJEGC_o **ppGVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566259 & 1) == 0) {
    FUN_01bab630(&GNJBJKEJEGC_TypeInfo);
    DAT_04566259 = 1;
    method = extraout_x1;
  }
  pGVar1 = (GNJBJKEJEGC_o *)thunk_FUN_01bda818(GNJBJKEJEGC_TypeInfo,method);
  GNJBJKEJEGC___ctor(pGVar1,0.0,(MethodInfo *)0x0);
  (__this->fields).EHENNILDPMD = pGVar1;
  thunk_FUN_01c20e04(&__this->fields,pGVar1);
  pGVar1 = (GNJBJKEJEGC_o *)thunk_FUN_01bda818(GNJBJKEJEGC_TypeInfo);
  GNJBJKEJEGC___ctor(pGVar1,0.0,(MethodInfo *)0x0);
  ppGVar2 = &(__this->fields).MEGGHJNADEN;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

