// MNLIBPAOCLG$$MENMLPHAGKO @ RVA 0x31E876C

void MNLIBPAOCLG__MENMLPHAGKO
               (MNLIBPAOCLG_o *__this,CNDPAJOLKFN_o *EKEMKOCPHPO,CNDPAJOLKFN_o *MJNAHMEKOLE,
               float LFJGFLNMBMC,bool OHHHOODPACJ,System_String_o *BEOLPHEOACM,float NKLEIAMJEMN,
               float BPDGIJADMJC,MethodInfo *method)

{
  undefined1 auVar1 [12];
  bool bVar2;
  PKHLGDMJPMF_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  CocosAnimation_o *pCVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *__this_01;
  CocosAnimation_o **ppCVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566d7a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CocosAnimation>__,EKEMKOCPHPO,
                 MJNAHMEKOLE,OHHHOODPACJ);
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04566d7a = 1;
  }
  __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
  PKHLGDMJPMF___ctor(__this_00,1.0,0.0,(MethodInfo *)0x0);
  fVar7 = PKHLGDMJPMF__EBHMOCBHAFJ((PKHLGDMJPMF_o *)MJNAHMEKOLE,__this_00,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BAKAPMIJMEN;
  pUVar5 = (UnityEngine_Transform_o *)0x0;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pCVar4 = (CocosAnimation_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar3,Method_UnityEngine_GameObject_GetComponent<CocosAnimation>__);
    ppCVar6 = &(__this->fields).JFHJBGJOPME;
    *ppCVar6 = pCVar4;
                    /* try { // try from 032e882c to 033e88fb has its CatchHandler @ 032e882c
                       catch() { ... } // from try @ 032e882c with catch @ 032e882c
                       catch() { ... } // from try @ 032e8954 with catch @ 032e882c
                       catch() { ... } // from try @ 032e89b8 with catch @ 032e882c
                       catch() { ... } // from try @ 032e89e8 with catch @ 032e882c
                       catch() { ... } // from try @ 032e8a20 with catch @ 032e882c */
    thunk_FUN_01c20e04(ppCVar6,pCVar4);
    pUVar5 = (UnityEngine_Transform_o *)0x0;
    if (*ppCVar6 != (CocosAnimation_o *)0x0) {
      bVar2 = CocosAnimation__Init(*ppCVar6,BEOLPHEOACM,1,(System_String_o *)0x0,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Transform_o *)(ulong)bVar2;
      pCVar4 = *ppCVar6;
      if (pCVar4 != (CocosAnimation_o *)0x0) {
        (pCVar4->fields)._FEBBHCOAEMI_k__BackingField = 1;
        (pCVar4->fields)._PPEGDOHGLJJ_k__BackingField = LFJGFLNMBMC;
        (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = true;
        pUVar3 = (__this->fields).BAKAPMIJMEN;
        pUVar5 = (UnityEngine_Transform_o *)0x0;
        if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar5 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
            EKEMKOCPHPO != (CNDPAJOLKFN_o *)0x0)) && (pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = 0.0;
          value.fields.x = (EKEMKOCPHPO->fields).super.OHHDBINAJCB;
          value.fields.y = (EKEMKOCPHPO->fields).super.JOLEIODMLFL;
          UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).BAKAPMIJMEN;
          pUVar5 = (UnityEngine_Transform_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalScale(pUVar5,NKLEIAMJEMN,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).BAKAPMIJMEN;
            pUVar5 = (UnityEngine_Transform_o *)0x0;
            if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_01 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
               pUVar5 = (UnityEngine_Transform_o *)0x0, __this_01 != (UnityEngine_Transform_o *)0x0)
               ) {
              fVar8 = 0.0;
              if ((uint)ABS(fVar7 + BPDGIJADMJC) < 0x7f800001) {
                fVar8 = -(fVar7 + BPDGIJADMJC);
              }
              auVar1._4_8_ = 0;
              auVar1._0_4_ = fVar8;
              UnityEngine_Transform__set_eulerAngles
                        (__this_01,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
              pUVar3 = (__this->fields).BAKAPMIJMEN;
              pUVar5 = (UnityEngine_Transform_o *)0x0;
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 032e88fc to 033e8903 has its CatchHandler @ 032e89cc */
                UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pUVar5);
}

