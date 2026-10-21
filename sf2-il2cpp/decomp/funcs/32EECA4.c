// KBFGKFAKGPP$$ODLJAONHEGG @ RVA 0x32EECA4

void KBFGKFAKGPP__ODLJAONHEGG
               (KBFGKFAKGPP_o *__this,HDBPKHNKOGI_o *CPECAEHDDDB,OLKKAIFGGAK_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_00;
  CPAJCJHOLEJ_o *__this_01;
  PNGKLCHKPEO_o *pPVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *parent;
  UnityEngine_Sprite_array *pUVar7;
  CocosAnimation_o *__this_02;
  GLCAPECMBLM_o *__this_03;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_04;
  OPNFCOGALLI_o *pOVar8;
  UnityEngine_GameObject_o *__this_05;
  GLCAPECMBLM_array *pGVar9;
  NJPBHDMCLIN_o *pNVar10;
  System_String_o *pSVar11;
  float fVar12;
  float fVar13;
  undefined8 in_d1;
  undefined8 in_d2;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_0456765f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&GLCAPECMBLM_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
                    /* try { // try from 033eed34 to 034eed3b has its CatchHandler @ 033eed5c */
    FUN_01bab630(&StringLiteral_12915);
                    /* try { // try from 033eed3c to 034eed3f has its CatchHandler @ 033eed54 */
                    /* try { // try from 033eed40 to 034eed43 has its CatchHandler @ 033eea44 */
    FUN_01bab630(&StringLiteral_5638);
                    /* try { // try from 033eed44 to 034eed47 has its CatchHandler @ 033eed50 */
                    /* try { // try from 033eed48 to 034eed77 has its CatchHandler @ 033eea44 */
    DAT_0456765f = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eed44 with catch @ 033eed50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eed3c with catch @ 033eed54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eec20 with catch @ 033eed58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eed34 with catch @ 033eed5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eeb90 with catch @ 033eed60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eeb34 with catch @ 033eed64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eebd0 with catch @ 033eed68
                        */
  if ((((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
       (pOVar8 = (BCKBBGCOMJD->fields).OAKOFJJIOFF, pOVar8 != (OPNFCOGALLI_o *)0x0)) &&
      (pNVar10 = (BCKBBGCOMJD->fields).FNEAAHOOHAA, pNVar10 != (NJPBHDMCLIN_o *)0x0)) &&
     ((pNVar10->fields).FOJEHKCDKFH = (pOVar8->fields).DMJAJGGGHPF,
     CPECAEHDDDB != (HDBPKHNKOGI_o *)0x0)) {
    pSVar11 = (CPECAEHDDDB->fields).NPFMOEOIEKM;
                    /* try { // try from 033eed78 to 034eed7b has its CatchHandler @ 033eed8c */
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* catch() { ... } // from try @ 033eed78 with catch @ 033eed8c */
    UnityEngine_GameObject___ctor(__this_00,pSVar11,(MethodInfo *)0x0);
    __this_01 = (CPECAEHDDDB->fields).PKNGDBGLNEO;
                    /* try { // try from 033eed94 to 034eedfb has its CatchHandler @ 033eee10 */
    if (__this_01 == (CPAJCJHOLEJ_o *)0x0) {
      pPVar5 = (CPECAEHDDDB->fields).NDOAINJDMIH;
      if (((pPVar5 == (PNGKLCHKPEO_o *)0x0) ||
          (value.fields.x =
                (*(pPVar5->klass->vtable)._7_KILOIOEILFL.methodPtr)
                          (pPVar5,pNVar10,(pPVar5->klass->vtable)._7_KILOIOEILFL.method),
          __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
         (pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_033ef0a8;
      value.fields.y = (undefined4)in_d1;
      value.fields.z = (float)in_d2;
      UnityEngine_Transform__set_localPosition(pUVar6,value,(MethodInfo *)0x0);
    }
    else {
      CPAJCJHOLEJ__LLCONNGHGKD(__this_01,BCKBBGCOMJD,__this_00,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_033ef0a8;
    }
                    /* try { // try from 033eedfc to 034eee07 has its CatchHandler @ 033eea44 */
                    /* try { // try from 033eee08 to 034eee0f has its CatchHandler @ 033eee10 */
    pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033eed94 with catch @ 033eee10
                       catch(type#2 @ 00000000) { ... } // from try @ 033eee08 with catch @ 033eee10
                        */
    iVar2 = (pNVar10->fields).FOJEHKCDKFH;
    fVar14 = (CPECAEHDDDB->fields).AHODAMCBIHA.fields.x;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    fVar12 = EOAOCPLIKOI__BJIALNCIMAL((MethodInfo *)0x0);
    fVar15 = (CPECAEHDDDB->fields).AHODAMCBIHA.fields.y;
    fVar13 = EOAOCPLIKOI__BJIALNCIMAL((MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      value_00.fields.y = fVar13 * -fVar15;
      value_00.fields.x = fVar14 * (float)iVar2 * fVar12;
      value_00.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pUVar6,value_00,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      __this_05 = (__this->fields).LDAKOINICNJ;
      if ((__this_05 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar6,parent,false,(MethodInfo *)0x0);
        fVar14 = (CPECAEHDDDB->fields).BJKDOBKIBIA;
        pSVar11 = System_String__Concat
                            (StringLiteral_12915,(CPECAEHDDDB->fields).MJPPLPGPHIK,(MethodInfo *)0x0
                            );
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
        }
        pUVar7 = NGCBNMBJMOE__MMHFNAEHAKC(pSVar11,false,(MethodInfo *)0x0);
        __this_02 = (CocosAnimation_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_00,
                               Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
        pSVar11 = System_String__Concat
                            (StringLiteral_12915,(CPECAEHDDDB->fields).MJPPLPGPHIK,(MethodInfo *)0x0
                            );
        if (__this_02 != (CocosAnimation_o *)0x0) {
          CocosAnimation__Init(__this_02,pSVar11,1,(System_String_o *)0x0,(MethodInfo *)0x0);
          if ((pUVar7 == (UnityEngine_Sprite_array *)0x0) || (pUVar7->max_length == 0)) {
            pSVar11 = System_String__Concat
                                (StringLiteral_5638,(CPECAEHDDDB->fields).MJPPLPGPHIK,
                                 (MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
          }
          iVar1 = -1;
          if ((CPECAEHDDDB->fields).GFPACGPFOPI == false) {
            iVar1 = 1;
          }
          (__this_02->fields)._FEBBHCOAEMI_k__BackingField = iVar1;
          if ((CPECAEHDDDB->fields).ALOJEOEGPJO == false) {
            CocosAnimation__SetFirstFrame(__this_02,(MethodInfo *)0x0);
          }
          else {
            CocosAnimation__SetLastFrame(__this_02,(MethodInfo *)0x0);
          }
          (__this_02->fields)._PPEGDOHGLJJ_k__BackingField = fVar14 / 60.0;
          __this_03 = (GLCAPECMBLM_o *)thunk_FUN_01bda818(GLCAPECMBLM_TypeInfo);
          GLCAPECMBLM___ctor(__this_03,BCKBBGCOMJD,CPECAEHDDDB,__this_00,__this_02,(MethodInfo *)0x0
                            );
          lVar4 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
          __this_04 = (__this->fields).FIFCACFAFPH;
          if (__this_04 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
                    /* try { // try from 033ef014 to 034ef043 has its CatchHandler @ 033ef014
                       catch() { ... } // from try @ 033ef014 with catch @ 033ef014
                       catch() { ... } // from try @ 033ef080 with catch @ 033ef014
                       catch() { ... } // from try @ 033ef0c4 with catch @ 033ef014
                       catch() { ... } // from try @ 033ef1a4 with catch @ 033ef014 */
            pGVar9 = (__this_04->fields)._items;
            (__this_04->fields)._version = (__this_04->fields)._version + 1;
            if (pGVar9 != (GLCAPECMBLM_array *)0x0) {
              uVar3 = (__this_04->fields)._size;
              if (uVar3 < (uint)pGVar9->max_length) {
                (__this_04->fields)._size = uVar3 + 1;
                    /* try { // try from 033ef044 to 034ef057 has its CatchHandler @ 033ef090 */
                pGVar9->m_Items[(int)uVar3] = __this_03;
                thunk_FUN_01c20e04(pGVar9->m_Items + (int)uVar3,__this_03);
              }
              else {
                    /* try { // try from 033ef068 to 034ef07f has its CatchHandler @ 033ef094 */
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_04,
                           (Il2CppObject *)__this_03,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              OLKKAIFGGAK__KFEOPCPBMJB(BCKBBGCOMJD,__this_03,(MethodInfo *)0x0);
              if (__this_03 != (GLCAPECMBLM_o *)0x0) {
                    /* try { // try from 033ef080 to 034ef0ab has its CatchHandler @ 033ef014 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ef044 with catch @ 033ef090
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ef068 with catch @ 033ef094
                        */
                GLCAPECMBLM__MHENCNPBING(__this_03,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_033ef0a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

