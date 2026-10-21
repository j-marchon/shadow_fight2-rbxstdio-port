// TypeDefIndex 1078
// Namespace: 
// [CompilerGenerated]
// private sealed class CGBIAHNHDNL.FOHDNCNEEBF : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public OPNFCOGALLI animation; // 0x20
//   public CGBIAHNHDNL <>4__this; // 0x28
//   public CNDPAJOLKFN start; // 0x30
//   public CNDPAJOLKFN target; // 0x38
//   private CGBIAHNHDNL.MCGBLBBJBAG <>8__1; // 0x40
//   private float <lerpStep>5__2; // 0x48
//   private float <curAlpha>5__3; // 0x4C
//   private Vector3 <startV>5__4; // 0x50
//   private Vector3 <targetV>5__5; // 0x5C

// ===== public void .ctor(int <>1__state)  [RVA 0x30DFBB4]
// CGBIAHNHDNL.FOHDNCNEEBF$$.ctor @ RVA 0x30DFBB4

void CGBIAHNHDNL_FOHDNCNEEBF___ctor
               (CGBIAHNHDNL_FOHDNCNEEBF_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x30E0120]
// CGBIAHNHDNL.FOHDNCNEEBF$$System.IDisposable.Dispose @ RVA 0x30E0120

void CGBIAHNHDNL_FOHDNCNEEBF__System_IDisposable_Dispose
               (CGBIAHNHDNL_FOHDNCNEEBF_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x30E0124]
// CGBIAHNHDNL.FOHDNCNEEBF$$MoveNext @ RVA 0x30E0124

/* WARNING: Removing unreachable block (ram,0x031e036c) */
/* WARNING: Type propagation algorithm not settling */

bool CGBIAHNHDNL_FOHDNCNEEBF__MoveNext(CGBIAHNHDNL_FOHDNCNEEBF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  CGBIAHNHDNL_MCGBLBBJBAG_o *pCVar2;
  ECENNHNBAME_o *pEVar3;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar4;
  Il2CppObject *__this_02;
  MethodInfo *extraout_x1;
  OPNFCOGALLI_o *pOVar5;
  CNDPAJOLKFN_o *pCVar6;
  GBJGJEGPHKD_o *pGVar7;
  Il2CppObject **ppIVar8;
  int iVar9;
  CNDPAJOLKFN_o *pCVar10;
  CGBIAHNHDNL_MCGBLBBJBAG_o **ppCVar11;
  OLKKAIFGGAK_o *pOVar12;
  CGBIAHNHDNL_o *pCVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  
  if ((DAT_04566394 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_CGBIAHNHDNL_MCGBLBBJBAG_CJPPGPOMABH__);
    FUN_01bab630(&CGBIAHNHDNL_MCGBLBBJBAG_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    FUN_01bab630(&StringLiteral_11798/*"SelfUninterrupt"*/);
    DAT_04566394 = 1;
    method = extraout_x1;
  }
  iVar9 = (__this->fields).__1__state;
  pCVar13 = (__this->fields).__4__this;
  if (iVar9 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar9 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pCVar2 = (CGBIAHNHDNL_MCGBLBBJBAG_o *)
             thunk_FUN_01bda818(CGBIAHNHDNL_MCGBLBBJBAG_TypeInfo,method);
    System_Object___ctor((Il2CppObject *)pCVar2,(MethodInfo *)0x0);
    ppCVar11 = &(__this->fields).__8__1;
    *ppCVar11 = pCVar2;
    thunk_FUN_01c20e04(ppCVar11,pCVar2);
    pOVar5 = (__this->fields).animation;
    if ((pOVar5 == (OPNFCOGALLI_o *)0x0) ||
       (pEVar3 = (pOVar5->fields).NDBPNFLAKDL, pEVar3 == (ECENNHNBAME_o *)0x0)) goto LAB_031e046c;
    iVar1 = ECENNHNBAME__PBJGINPFPDC(pEVar3,StringLiteral_11798/*"SelfUninterrupt"*/,false,(MethodInfo *)0x0);
    iVar9 = iVar1 + -1;
    if (iVar9 < 1) {
      pOVar5 = (__this->fields).animation;
      if ((pOVar5 == (OPNFCOGALLI_o *)0x0) ||
         (pEVar3 = (pOVar5->fields).NDBPNFLAKDL, pEVar3 == (ECENNHNBAME_o *)0x0)) goto LAB_031e046c;
      iVar1 = ECENNHNBAME__MBDJHMEEGGP(pEVar3,false,(MethodInfo *)0x0);
      iVar9 = iVar1 + -1;
    }
    if (pCVar13 == (CGBIAHNHDNL_o *)0x0) goto LAB_031e046c;
    __this_00 = (pCVar13->fields).FEKDJGKIJHP;
    if (__this_00 == (NILLKLHKLHG_o *)0x0) {
      fVar14 = 0.05;
    }
    else {
      __this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
      if (__this_01 == (MMFIDKMDADC_o *)0x0) goto LAB_031e046c;
      fVar14 = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0);
    }
    pCVar10 = (__this->fields).start;
    fVar15 = 1.0 / (float)iVar9;
    if (1.0 / (float)iVar9 <= fVar14) {
      fVar15 = fVar14;
    }
    (__this->fields)._lerpStep_5__2 = fVar15;
    (__this->fields)._curAlpha_5__3 = 0.0;
    if (pCVar10 == (CNDPAJOLKFN_o *)0x0) goto LAB_031e046c;
    fVar14 = (pCVar10->fields).super.JOLEIODMLFL;
    fVar15 = (pCVar10->fields).PPOPAMHBMGG;
    pCVar6 = (__this->fields).target;
    (__this->fields)._startV_5__4.fields.x = (pCVar10->fields).super.OHHDBINAJCB;
    (__this->fields)._startV_5__4.fields.y = fVar14;
    (__this->fields)._startV_5__4.fields.z = fVar15;
    if (pCVar6 == (CNDPAJOLKFN_o *)0x0) goto LAB_031e046c;
    fVar14 = (pCVar6->fields).super.JOLEIODMLFL;
    fVar15 = (pCVar6->fields).PPOPAMHBMGG;
    (__this->fields)._targetV_5__5.fields.x = (pCVar6->fields).super.OHHDBINAJCB;
    (__this->fields)._targetV_5__5.fields.y = fVar14;
    (__this->fields)._targetV_5__5.fields.z = fVar15;
    pCVar6 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    CNDPAJOLKFN___ctor(pCVar6,pCVar10,(MethodInfo *)0x0);
    pCVar2 = (__this->fields).__8__1;
    if (pCVar2 == (CGBIAHNHDNL_MCGBLBBJBAG_o *)0x0) goto LAB_031e046c;
    (pCVar2->fields).canMove = true;
    pOVar5 = (__this->fields).animation;
    if ((pOVar5 == (OPNFCOGALLI_o *)0x0) ||
       (pGVar7 = (pOVar5->fields).KOHECBJAFKG, pGVar7 == (GBJGJEGPHKD_o *)0x0)) goto LAB_031e046c;
    pOVar12 = (pGVar7->fields).KOHECBJAFKG;
    pSVar4 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
             thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (pOVar12 == (OLKKAIFGGAK_o *)0x0) goto LAB_031e046c;
    OLKKAIFGGAK__NODNEKBHENK(pOVar12,pSVar4,(MethodInfo *)0x0);
  }
  pCVar2 = (__this->fields).__8__1;
  if (pCVar2 != (CGBIAHNHDNL_MCGBLBBJBAG_o *)0x0) {
    fVar14 = (__this->fields)._curAlpha_5__3;
    if (((pCVar2->fields).canMove & fVar14 < 1.0) == 0) {
      pOVar5 = (__this->fields).animation;
      if ((pOVar5 != (OPNFCOGALLI_o *)0x0) &&
         (pGVar7 = (pOVar5->fields).KOHECBJAFKG, pGVar7 != (GBJGJEGPHKD_o *)0x0)) {
        pOVar12 = (pGVar7->fields).KOHECBJAFKG;
        pSVar4 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                 thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
        System_Action<object>___ctor();
        if (pOVar12 != (OLKKAIFGGAK_o *)0x0) {
          OLKKAIFGGAK__OMMHPGNAIKP(pOVar12,pSVar4,(MethodInfo *)0x0);
          return false;
        }
      }
    }
    else {
      uVar16 = (__this->fields)._startV_5__4.fields.x;
      uVar17 = (__this->fields)._startV_5__4.fields.y;
      uVar18 = (__this->fields)._targetV_5__5.fields.x;
      uVar19 = (__this->fields)._targetV_5__5.fields.y;
      fVar15 = (__this->fields)._startV_5__4.fields.z;
      if (fVar14 < 0.0) {
        fVar14 = 0.0;
      }
      PHCOHKNFGLE.fields.x = (float)uVar16 + ((float)uVar18 - (float)uVar16) * fVar14;
      PHCOHKNFGLE.fields.z = fVar15 + fVar14 * ((__this->fields)._targetV_5__5.fields.z - fVar15);
      PHCOHKNFGLE.fields.y = (float)uVar17 + ((float)uVar19 - (float)uVar17) * fVar14;
      pCVar10 = CNDPAJOLKFN__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
      if ((pCVar13 != (CGBIAHNHDNL_o *)0x0) &&
         (pOVar5 = (__this->fields).animation, pOVar5 != (OPNFCOGALLI_o *)0x0)) {
        OPNFCOGALLI__GEIAIGHBEPD
                  (pOVar5,pCVar10,(pCVar13->fields).CHOHPFCDFIN,(pCVar13->fields).AAADCDBKMCA,
                   (MethodInfo *)0x0);
        (__this->fields)._curAlpha_5__3 =
             (__this->fields)._curAlpha_5__3 + (__this->fields)._lerpStep_5__2;
        __this_02 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForFixedUpdate_TypeInfo);
        UnityEngine_WaitForFixedUpdate___ctor
                  ((UnityEngine_WaitForFixedUpdate_o *)__this_02,(MethodInfo *)0x0);
        ppIVar8 = &(__this->fields).__2__current;
        *ppIVar8 = __this_02;
        thunk_FUN_01c20e04(ppIVar8,__this_02);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
LAB_031e046c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x30E0470]
// CGBIAHNHDNL.FOHDNCNEEBF$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x30E0470

Il2CppObject *
CGBIAHNHDNL_FOHDNCNEEBF__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CGBIAHNHDNL_FOHDNCNEEBF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x30E0478]
// CGBIAHNHDNL.FOHDNCNEEBF$$System.Collections.IEnumerator.Reset @ RVA 0x30E0478

void CGBIAHNHDNL_FOHDNCNEEBF__System_Collections_IEnumerator_Reset
               (CGBIAHNHDNL_FOHDNCNEEBF_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_CGBIAHNHDNL_FOHDNCNEEBF_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x30E04B0]
// CGBIAHNHDNL.FOHDNCNEEBF$$System.Collections.IEnumerator.get_Current @ RVA 0x30E04B0

Il2CppObject *
CGBIAHNHDNL_FOHDNCNEEBF__System_Collections_IEnumerator_get_Current
          (CGBIAHNHDNL_FOHDNCNEEBF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

