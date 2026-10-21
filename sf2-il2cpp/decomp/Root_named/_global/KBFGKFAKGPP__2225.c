// TypeDefIndex 2225
// Namespace: 
// public class KBFGKFAKGPP
// Fields:
//   private const string MKEEEDOKPMM = "Textures/Effects/Magic/";
//   private GameObject LDAKOINICNJ; // 0x10
//   private List<GLCAPECMBLM> FIFCACFAFPH; // 0x18
//   private readonly List<GLCAPECMBLM> PLNIEGAECMC; // 0x20

// ===== public void .ctor()  [RVA 0x32EEBA0]
// KBFGKFAKGPP$$.ctor @ RVA 0x32EEBA0

void KBFGKFAKGPP___ctor(KBFGKFAKGPP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar1;
  System_Collections_Generic_List_GLCAPECMBLM__o **ppSVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033eebd0 to 034eec1f has its CatchHandler @ 033eed68 */
  if ((DAT_0456765e & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GLCAPECMBLM>_TypeInfo);
    FUN_01bab630(&StringLiteral_5643/*"EffectsRunning"*/);
    DAT_0456765e = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_GLCAPECMBLM__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<GLCAPECMBLM>_TypeInfo,method);
                    /* try { // try from 033eec20 to 034eec2f has its CatchHandler @ 033eed58 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<GLCAPECMBLM>__ctor__);
  ppSVar2 = &(__this->fields).FIFCACFAFPH;
                    /* try { // try from 033eec30 to 034eed33 has its CatchHandler @ 033eea44 */
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GLCAPECMBLM__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<GLCAPECMBLM>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<GLCAPECMBLM>__ctor__);
  ppSVar2 = &(__this->fields).PLNIEGAECMC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_5643/*"EffectsRunning"*/,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}


// ===== public void ODLJAONHEGG(ActionEffect CPECAEHDDDB, Model BCKBBGCOMJD)  [RVA 0x32EECA4]
// KBFGKFAKGPP$$ODLJAONHEGG @ RVA 0x32EECA4

void KBFGKFAKGPP__ODLJAONHEGG
               (KBFGKFAKGPP_o *__this,ActionEffect_o *CPECAEHDDDB,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_00;
  CPAJCJHOLEJ_o *__this_01;
  DistancePoint_o *pPVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *parent;
  UnityEngine_Sprite_array *pUVar7;
  CocosAnimation_o *__this_02;
  GLCAPECMBLM_o *__this_03;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_04;
  ModelAnimation_o *pOVar8;
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
    FUN_01bab630(&StringLiteral_12915/*"Textures/Effects/Magic/"*/);
                    /* try { // try from 033eed3c to 034eed3f has its CatchHandler @ 033eed54 */
                    /* try { // try from 033eed40 to 034eed43 has its CatchHandler @ 033eea44 */
    FUN_01bab630(&StringLiteral_5638/*"Effect NO Textures/Effects/Magic/"*/);
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
  if ((((BCKBBGCOMJD != (Model_o *)0x0) &&
       (pOVar8 = (BCKBBGCOMJD->fields).OAKOFJJIOFF, pOVar8 != (ModelAnimation_o *)0x0)) &&
      (pNVar10 = (BCKBBGCOMJD->fields).FNEAAHOOHAA, pNVar10 != (NJPBHDMCLIN_o *)0x0)) &&
     ((pNVar10->fields).FOJEHKCDKFH = (pOVar8->fields).DMJAJGGGHPF,
     CPECAEHDDDB != (ActionEffect_o *)0x0)) {
    pSVar11 = (CPECAEHDDDB->fields).NPFMOEOIEKM;
                    /* try { // try from 033eed78 to 034eed7b has its CatchHandler @ 033eed8c */
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* catch() { ... } // from try @ 033eed78 with catch @ 033eed8c */
    UnityEngine_GameObject___ctor(__this_00,pSVar11,(MethodInfo *)0x0);
    __this_01 = (CPECAEHDDDB->fields).PKNGDBGLNEO;
                    /* try { // try from 033eed94 to 034eedfb has its CatchHandler @ 033eee10 */
    if (__this_01 == (CPAJCJHOLEJ_o *)0x0) {
      pPVar5 = (CPECAEHDDDB->fields).NDOAINJDMIH;
      if (((pPVar5 == (DistancePoint_o *)0x0) ||
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
                            (StringLiteral_12915/*"Textures/Effects/Magic/"*/,(CPECAEHDDDB->fields).MJPPLPGPHIK,(MethodInfo *)0x0
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
                            (StringLiteral_12915/*"Textures/Effects/Magic/"*/,(CPECAEHDDDB->fields).MJPPLPGPHIK,(MethodInfo *)0x0
                            );
        if (__this_02 != (CocosAnimation_o *)0x0) {
          CocosAnimation__Init(__this_02,pSVar11,1,(System_String_o *)0x0,(MethodInfo *)0x0);
          if ((pUVar7 == (UnityEngine_Sprite_array *)0x0) || (pUVar7->max_length == 0)) {
            pSVar11 = System_String__Concat
                                (StringLiteral_5638/*"Effect NO Textures/Effects/Magic/"*/,(CPECAEHDDDB->fields).MJPPLPGPHIK,
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
              Model__KFEOPCPBMJB(BCKBBGCOMJD,__this_03,(MethodInfo *)0x0);
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


// ===== private void KEMEFBDNPCK(GLCAPECMBLM AHCMAIOOIKM)  [RVA 0x32EF0AC]
// KBFGKFAKGPP$$KEMEFBDNPCK @ RVA 0x32EF0AC

void KBFGKFAKGPP__KEMEFBDNPCK(KBFGKFAKGPP_o *__this,GLCAPECMBLM_o *AHCMAIOOIKM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  GLCAPECMBLM_array *pGVar4;
  
                    /* try { // try from 033ef0ac to 034ef0c3 has its CatchHandler @ 033ef19c */
                    /* try { // try from 033ef0c4 to 034ef18b has its CatchHandler @ 033ef014 */
  if ((DAT_04567660 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__);
    DAT_04567660 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    pGVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pGVar4 != (GLCAPECMBLM_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pGVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pGVar4->m_Items[(int)uVar1] = AHCMAIOOIKM;
        thunk_FUN_01c20e04(pGVar4->m_Items + (int)uVar1,AHCMAIOOIKM);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)AHCMAIOOIKM,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if ((AHCMAIOOIKM != (GLCAPECMBLM_o *)0x0) &&
         (pUVar3 = (AHCMAIOOIKM->fields).PBDIPLHDHHD, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        __this_01 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).LDAKOINICNJ;
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 033ef18c to 034ef19b has its CatchHandler @ 033ef19c */
          UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDBCBDMBFON(List<GLCAPECMBLM> EDEHNHIHDDH)  [RVA 0x32EF198]
// KBFGKFAKGPP$$NDBCBDMBFON @ RVA 0x32EF198

void KBFGKFAKGPP__NDBCBDMBFON
               (KBFGKFAKGPP_o *__this,System_Collections_Generic_List_GLCAPECMBLM__o *EDEHNHIHDDH,
               MethodInfo *method)

{
  System_Action_T__o *action;
  
                    /* catch() { ... } // from try @ 033ef0ac with catch @ 033ef19c
                       catch() { ... } // from try @ 033ef18c with catch @ 033ef19c */
                    /* try { // try from 033ef1a0 to 034ef1a3 has its CatchHandler @ 033ef1ac */
                    /* try { // try from 033ef1a4 to 034ef1af has its CatchHandler @ 033ef014 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ef1a0 with catch @ 033ef1ac
                        */
                    /* try { // try from 033ef1b0 to 034efc5f has its CatchHandler @ 033ef1b0
                       catch() { ... } // from try @ 033ef1b0 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033efda8 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f0598 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f08b8 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f0f40 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1a08 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1e04 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1e58 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1e64 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f2058 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f2130 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f22b8 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f22ec with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f2328 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f23f0 with catch @ 033ef1b0 */
  if ((DAT_04567661 & 1) == 0) {
    FUN_01bab630(&System_Action<GLCAPECMBLM>_TypeInfo);
    FUN_01bab630(&Method_KBFGKFAKGPP_KEMEFBDNPCK__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    DAT_04567661 = 1;
  }
  action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<GLCAPECMBLM>_TypeInfo);
  System_Action<object>___ctor();
  if (EDEHNHIHDDH != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,action,
               Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLKFLBKKGAK(ActionStopEffect CPECAEHDDDB, Model BCKBBGCOMJD)  [RVA 0x32EF23C]
// KBFGKFAKGPP$$LLKFLBKKGAK @ RVA 0x32EF23C

void KBFGKFAKGPP__LLKFLBKKGAK
               (KBFGKFAKGPP_o *__this,ActionStopEffect_o *CPECAEHDDDB,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  if (CPECAEHDDDB != (ActionStopEffect_o *)0x0) {
    KBFGKFAKGPP__LLKFLBKKGAK(__this,(CPECAEHDDDB->fields).NPFMOEOIEKM,BCKBBGCOMJD,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LLKFLBKKGAK(GLCAPECMBLM AHCMAIOOIKM, int DPJIDNBJIBG)  [RVA 0x32EF378]
// KBFGKFAKGPP$$LLKFLBKKGAK @ RVA 0x32EF378

void KBFGKFAKGPP__LLKFLBKKGAK
               (KBFGKFAKGPP_o *__this,GLCAPECMBLM_o *AHCMAIOOIKM,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  Model_o *__this_00;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_01;
  
  if ((DAT_04567662 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_RemoveAt__);
    DAT_04567662 = 1;
  }
  if (AHCMAIOOIKM != (GLCAPECMBLM_o *)0x0) {
    Util__JODGPLBHHIA((AHCMAIOOIKM->fields).PBDIPLHDHHD,false,(MethodInfo *)0x0);
    __this_00 = (AHCMAIOOIKM->fields).BCKBBGCOMJD;
    if (__this_00 != (Model_o *)0x0) {
      Model__OOINAEOGPPB(__this_00,AHCMAIOOIKM,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).FIFCACFAFPH;
    if (__this_01 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,DPJIDNBJIBG,
                 Method_System_Collections_Generic_List<GLCAPECMBLM>_RemoveAt__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DABOBFKFPKJ(List<GLCAPECMBLM> EDEHNHIHDDH)  [RVA 0x32EF404]
// KBFGKFAKGPP$$DABOBFKFPKJ @ RVA 0x32EF404

void KBFGKFAKGPP__DABOBFKFPKJ
               (KBFGKFAKGPP_o *__this,System_Collections_Generic_List_GLCAPECMBLM__o *EDEHNHIHDDH,
               MethodInfo *method)

{
  System_Action_T__o *action;
  
  if ((DAT_04567663 & 1) == 0) {
    FUN_01bab630(&System_Action<GLCAPECMBLM>_TypeInfo);
    FUN_01bab630(&Method_KBFGKFAKGPP_FHLIGIMFAEA__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    DAT_04567663 = 1;
  }
  action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<GLCAPECMBLM>_TypeInfo);
  System_Action<object>___ctor();
  if (EDEHNHIHDDH != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,action,
               Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AAILGEMALAJ()  [RVA 0x32EF4A8]
// KBFGKFAKGPP$$AAILGEMALAJ @ RVA 0x32EF4A8

void KBFGKFAKGPP__AAILGEMALAJ(KBFGKFAKGPP_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  GLCAPECMBLM_o *__this_00;
  CocosAnimation_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_02;
  ActionEffect_o *pHVar3;
  int index;
  int iVar4;
  
  if ((DAT_04567664 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04567664 = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  iVar2 = GameUtils__PCJHAMFGJLP((MethodInfo *)0x0);
  __this_02 = (__this->fields).FIFCACFAFPH;
  if (__this_02 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar4 = (__this_02->fields)._size;
    if (iVar4 < 1) {
      return;
    }
    index = 0;
    do {
      __this_00 = (GLCAPECMBLM_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,index,
                             Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
      if ((__this_00 == (GLCAPECMBLM_o *)0x0) ||
         (__this_01 = (__this_00->fields).OLLOKPHMOBP, __this_01 == (CocosAnimation_o *)0x0)) break;
      pHVar3 = (__this_00->fields).AHCMAIOOIKM;
      if ((__this_01->fields)._JJCDMHFHJAB_k__BackingField == false) {
        if (pHVar3 == (ActionEffect_o *)0x0) break;
LAB_033ef5b0:
        KBFGKFAKGPP__LLKFLBKKGAK
                  (__this,(pHVar3->fields).NPFMOEOIEKM,(__this_00->fields).BCKBBGCOMJD,in_x3);
        iVar4 = iVar4 + -1;
        index = index + -1;
      }
      else {
        if (pHVar3 == (ActionEffect_o *)0x0) break;
        if ((pHVar3->fields).NMIEFOCHBNM != false) {
          bVar1 = (__this_00->fields).DHHAIGLEBHH;
          if ((__this_00->fields).BCKBBGCOMJD == (Model_o *)0x0) {
            if (bVar1 == false) goto LAB_033ef5b0;
          }
          else if (bVar1 == false) {
            GLCAPECMBLM__JEFMDBBCIOB(__this_00,(MethodInfo *)0x0);
            __this_01 = (__this_00->fields).OLLOKPHMOBP;
            if (__this_01 == (CocosAnimation_o *)0x0) break;
          }
        }
        CocosAnimation__Render(__this_01,(1.0 / (float)iVar2) * 0.016666668,(MethodInfo *)0x0);
      }
      index = index + 1;
      if (iVar4 <= index) {
        return;
      }
      __this_02 = (__this->fields).FIFCACFAFPH;
    } while (__this_02 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<GLCAPECMBLM> JHNLKBALFBK(bool AHECABNOFFJ)  [RVA 0x32EF608]
// KBFGKFAKGPP$$JHNLKBALFBK @ RVA 0x32EF608

System_Collections_Generic_List_GLCAPECMBLM__o *
KBFGKFAKGPP__JHNLKBALFBK(KBFGKFAKGPP_o *__this,bool AHECABNOFFJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  Model_o *pOVar5;
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar6;
  ActionEffect_o *pHVar7;
  GLCAPECMBLM_array *pGVar8;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567665 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_GetEnumerator__);
    DAT_04567665 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields).PLNIEGAECMC;
  if (pSVar6 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar4 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields).FIFCACFAFPH;
    if (pSVar6 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<GLCAPECMBLM>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        do {
          do {
            do {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_60,
                                 Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_MoveNext__
                                );
              item = local_60.fields._current;
              if (!bVar3) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_Dispose__)
                ;
                return (__this->fields).PLNIEGAECMC;
              }
              if ((GLCAPECMBLM_o *)local_60.fields._current == (GLCAPECMBLM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar7 = ((GLCAPECMBLM_Fields *)((long)local_60.fields._current + 0x10))->AHCMAIOOIKM;
              if (pHVar7 == (ActionEffect_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            } while ((pHVar7->fields).FJACNELHGAK == false);
            if (((pHVar7->fields).PKPOHCOEHEN != false) == AHECABNOFFJ) {
              pOVar5 = ((GLCAPECMBLM_Fields *)((long)local_60.fields._current + 0x10))->BCKBBGCOMJD;
              if (pOVar5 == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar4 = Model__MALPGCALHNK(pOVar5,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
              if (iVar4 < 0) {
                pSVar6 = (__this->fields).PLNIEGAECMC;
                if (pSVar6 == (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pGVar8 = (pSVar6->fields)._items;
                (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                if (pGVar8 == (GLCAPECMBLM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar1 = (pSVar6->fields)._size;
                if (uVar1 < (uint)pGVar8->max_length) {
                  (pSVar6->fields)._size = uVar1 + 1;
                  pGVar8->m_Items[(int)uVar1] = (GLCAPECMBLM_o *)item;
                  thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar1,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar6,item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            pHVar7 = ((GLCAPECMBLM_Fields *)((long)item + 0x10))->AHCMAIOOIKM;
            if (pHVar7 == (ActionEffect_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while (((pHVar7->fields).PKPOHCOEHEN != false) == AHECABNOFFJ);
          pOVar5 = ((GLCAPECMBLM_Fields *)((long)item + 0x10))->BCKBBGCOMJD;
          if (pOVar5 == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = Model__MALPGCALHNK(pOVar5,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
        } while (iVar4 < 1);
        pSVar6 = (__this->fields).PLNIEGAECMC;
        if (pSVar6 == (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar8 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pGVar8 == (GLCAPECMBLM_array *)0x0) break;
        uVar1 = (pSVar6->fields)._size;
        if (uVar1 < (uint)pGVar8->max_length) {
          (pSVar6->fields)._size = uVar1 + 1;
          pGVar8->m_Items[(int)uVar1] = (GLCAPECMBLM_o *)item;
          thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FHLIGIMFAEA(GLCAPECMBLM AHCMAIOOIKM)  [RVA 0x32EF928]
// KBFGKFAKGPP$$FHLIGIMFAEA @ RVA 0x32EF928

void KBFGKFAKGPP__FHLIGIMFAEA(KBFGKFAKGPP_o *__this,GLCAPECMBLM_o *AHCMAIOOIKM,MethodInfo *method)

{
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  
  if ((DAT_04567666 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Remove__);
    DAT_04567666 = 1;
  }
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)AHCMAIOOIKM,
               Method_System_Collections_Generic_List<GLCAPECMBLM>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LLKFLBKKGAK(string KGLJICLJHEL, Model BCKBBGCOMJD)  [RVA 0x32EF254]
// KBFGKFAKGPP$$LLKFLBKKGAK @ RVA 0x32EF254

void KBFGKFAKGPP__LLKFLBKKGAK
               (KBFGKFAKGPP_o *__this,System_String_o *KGLJICLJHEL,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  GLCAPECMBLM_o *AHCMAIOOIKM;
  ActionEffect_o *pHVar3;
  int index;
  
  if ((DAT_04567667 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567667 = 1;
  }
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      AHCMAIOOIKM = (GLCAPECMBLM_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
      if (AHCMAIOOIKM == (GLCAPECMBLM_o *)0x0) break;
      if (BCKBBGCOMJD == (AHCMAIOOIKM->fields).BCKBBGCOMJD) {
        pHVar3 = (AHCMAIOOIKM->fields).AHCMAIOOIKM;
        if (pHVar3 == (ActionEffect_o *)0x0) break;
        bVar2 = System_String__op_Equality
                          (KGLJICLJHEL,(pHVar3->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
        if ((bVar2) ||
           (bVar2 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_1/*""*/,(MethodInfo *)0x0), bVar2
           )) {
          KBFGKFAKGPP__LLKFLBKKGAK(__this,AHCMAIOOIKM,index,method);
          return;
        }
      }
      if (iVar1 + -1 == index) {
        return;
      }
      __this_00 = (__this->fields).FIFCACFAFPH;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AAICFBHOPJK()  [RVA 0x32EF980]
// KBFGKFAKGPP$$AAICFBHOPJK @ RVA 0x32EF980

void KBFGKFAKGPP__AAICFBHOPJK(KBFGKFAKGPP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  GLCAPECMBLM_o *AHCMAIOOIKM;
  MethodInfo *in_x3;
  
  if ((DAT_04567668 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    DAT_04567668 = 1;
  }
  __this_00 = (__this->fields).FIFCACFAFPH;
  while( true ) {
    if (__this_00 == (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((__this_00->fields)._size < 1) break;
    AHCMAIOOIKM = (GLCAPECMBLM_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,0,
                             Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    KBFGKFAKGPP__LLKFLBKKGAK(__this,AHCMAIOOIKM,0,in_x3);
    __this_00 = (__this->fields).FIFCACFAFPH;
  }
  return;
}


// ===== public GameObject IJGHEOJPJLH()  [RVA 0x32EFA08]
// KBFGKFAKGPP$$IJGHEOJPJLH @ RVA 0x32EFA08

UnityEngine_GameObject_o * KBFGKFAKGPP__IJGHEOJPJLH(KBFGKFAKGPP_o *__this,MethodInfo *method)

{
  return (__this->fields).LDAKOINICNJ;
}


// ===== public void DHHAIGLEBHH(ActionStopFollowEffect CPECAEHDDDB, Model BCKBBGCOMJD)  [RVA 0x32EFA10]
// KBFGKFAKGPP$$DHHAIGLEBHH @ RVA 0x32EFA10

void KBFGKFAKGPP__DHHAIGLEBHH
               (KBFGKFAKGPP_o *__this,ActionStopFollowEffect_o *CPECAEHDDDB,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  if (CPECAEHDDDB != (ActionStopFollowEffect_o *)0x0) {
    KBFGKFAKGPP__DHHAIGLEBHH(__this,(CPECAEHDDDB->fields).NPFMOEOIEKM,BCKBBGCOMJD,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DHHAIGLEBHH(string KGLJICLJHEL, Model BCKBBGCOMJD)  [RVA 0x32EFA28]
// KBFGKFAKGPP$$DHHAIGLEBHH @ RVA 0x32EFA28

void KBFGKFAKGPP__DHHAIGLEBHH
               (KBFGKFAKGPP_o *__this,System_String_o *KGLJICLJHEL,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04567669 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    DAT_04567669 = 1;
  }
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      if ((Il2CppClass *)BCKBBGCOMJD == pIVar3[2].klass) {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) break;
        bVar2 = System_String__op_Equality
                          (KGLJICLJHEL,(System_String_o *)((pIVar3[1].klass)->_1).castClass,
                           (MethodInfo *)0x0);
        if (bVar2) {
          *(undefined1 *)&pIVar3[3].klass = 1;
          return;
        }
      }
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).FIFCACFAFPH;
    } while (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

