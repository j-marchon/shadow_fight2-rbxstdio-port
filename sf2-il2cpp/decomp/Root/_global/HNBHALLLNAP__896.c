// TypeDefIndex 896
// Namespace: 
// public class HNBHALLLNAP : HPEENDCCJND
// Fields:

// ===== protected override string AKPPNIPNKDH()  [RVA 0x3095458]
// HNBHALLLNAP$$AKPPNIPNKDH @ RVA 0x3095458

System_String_o * HNBHALLLNAP__AKPPNIPNKDH(HNBHALLLNAP_o *__this,MethodInfo *method)

{
  if ((DAT_045660d0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_22474/*"{v1}{?Concat[%, @v2, @v3, ?Concat[ @_AA, @v4@v5 ] ]}"*/);
    DAT_045660d0 = 1;
  }
  return StringLiteral_22474/*"{v1}{?Concat[%, @v2, @v3, ?Concat[ @_AA, @v4@v5 ] ]}"*/;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3095498]
// HNBHALLLNAP$$CJOHHBMFAAG @ RVA 0x3095498

Il2CppObject * HNBHALLLNAP__CJOHHBMFAAG(HNBHALLLNAP_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_045660d1 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
    FUN_01bab630(&StringLiteral_15920/*"_AA"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_22508/*"}{%"*/);
    DAT_045660d1 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_22230/*"{"*/;
      thunk_FUN_01c20e04(values->m_Items);
      pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_22508/*"}{%"*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar1;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar1);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = StringLiteral_15920/*"_AA"*/;
                thunk_FUN_01c20e04(values->m_Items + 5);
                pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = pSVar1;
                  thunk_FUN_01c20e04(values->m_Items + 6,pSVar1);
                  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar1;
                    thunk_FUN_01c20e04(values->m_Items + 7,pSVar1);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = StringLiteral_22500/*"}"*/;
                      thunk_FUN_01c20e04();
                      pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                      return (Il2CppObject *)pSVar1;
                    }
                  }
                }
              }
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


// ===== protected override string LIOJDJDKNOA(string CJNHFNHJHPE)  [RVA 0x30956B4]
// HNBHALLLNAP$$LIOJDJDKNOA @ RVA 0x30956B4

System_String_o *
HNBHALLLNAP__LIOJDJDKNOA(HNBHALLLNAP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045660d2 & 1) == 0) {
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    FUN_01bab630(&StringLiteral_22483/*"{}"*/);
    DAT_045660d2 = 1;
  }
  if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MDKJJDGLPKO__IKGIDGMHMBO(CJNHFNHJHPE,StringLiteral_22483/*"{}"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x3095724]
// HNBHALLLNAP$$ODGFCLOEKJD @ RVA 0x3095724

void HNBHALLLNAP__ODGFCLOEKJD(HNBHALLLNAP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Char_array *val;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  
  if ((DAT_045660d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Except<char>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<char>__);
    FUN_01bab630(&StringLiteral_339/*" _{}+-%"*/);
    FUN_01bab630(&StringLiteral_1147/*"+-*^(){}|/&#%=! "*/);
    DAT_045660d3 = 1;
  }
  source = System_Linq_Enumerable__Except<char>
                     (StringLiteral_1147/*"+-*^(){}|/&#%=! "*/,StringLiteral_339/*" _{}+-%"*/,
                      Method_System_Linq_Enumerable_Except<char>__);
  val = System_Linq_Enumerable__ToArray<char>(source,Method_System_Linq_Enumerable_ToArray<char>__);
  pSVar1 = System_String__CreateString((System_String_o *)0x0,val,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__PFHOGFBJGDE((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3095878]
// HNBHALLLNAP$$.ctor @ RVA 0x3095878

void HNBHALLLNAP___ctor(HNBHALLLNAP_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}

