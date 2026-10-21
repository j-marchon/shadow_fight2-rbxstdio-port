// MEMHEPBAJJA$$FKKKDIGNEFO @ RVA 0x33C6C68

void MEMHEPBAJJA__FKKKDIGNEFO
               (MEMHEPBAJJA_o *__this,Il2CppObject *IMMNELPBGIF,int32_t PHNOPDEALFJ,
               int32_t OHBHCKNMKOD,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlElement_o *PCAIKIGGBMJ;
  AFFHKININGD_o *pAVar2;
  DNELIPCHKLK_o *pDVar3;
  System_String_o *CJNHFNHJHPE;
  MEMHEPBAJJA_Fields *pMVar4;
  KCFIOKDFHIB_o *pKVar5;
  
  if ((DAT_04567df5 & 1) == 0) {
    FUN_01bab630(&KCFIOKDFHIB_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    FUN_01bab630(&StringLiteral_10714);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567df5 = 1;
  }
  pMVar4 = &__this->fields;
  if (pMVar4->_JNLLKNHOBDG_k__BackingField == (KCFIOKDFHIB_o *)0x0) {
    PCAIKIGGBMJ = EIABCPKDEBD__BHPIHHJHELJ
                            ((__this->fields).JHFENACKNPG,StringLiteral_10714,(MethodInfo *)0x0);
    pKVar5 = (KCFIOKDFHIB_o *)thunk_FUN_01bda818(KCFIOKDFHIB_TypeInfo);
    KCFIOKDFHIB___ctor(pKVar5,(System_Xml_XmlNode_o *)PCAIKIGGBMJ,(MethodInfo *)0x0);
    (__this->fields)._JNLLKNHOBDG_k__BackingField = pKVar5;
    thunk_FUN_01c20e04(pMVar4,pKVar5);
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (((Il2CppClass *)PKHMIGFEJCL_TypeInfo)->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)PKHMIGFEJCL_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
    KCFIOKDFHIB__DMGAKPLCJEL(pMVar4->_JNLLKNHOBDG_k__BackingField,OHBHCKNMKOD,(MethodInfo *)0x0);
    if ((pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) &&
       (KCFIOKDFHIB__DLGLNFNKONH(pMVar4->_JNLLKNHOBDG_k__BackingField,PHNOPDEALFJ,(MethodInfo *)0x0)
       , IMMNELPBGIF != (Il2CppObject *)0x0)) {
      pKVar5 = pMVar4->_JNLLKNHOBDG_k__BackingField;
      pAVar2 = PKHMIGFEJCL__ACPCMCCBDEI((PKHMIGFEJCL_o *)IMMNELPBGIF,(MethodInfo *)0x0);
      CJNHFNHJHPE = StringLiteral_1;
      if (pAVar2 != (AFFHKININGD_o *)0x0) {
        pAVar2 = PKHMIGFEJCL__ACPCMCCBDEI((PKHMIGFEJCL_o *)IMMNELPBGIF,(MethodInfo *)0x0);
        if ((pAVar2 == (AFFHKININGD_o *)0x0) ||
           (pDVar3 = (pAVar2->fields).KOILJHHCIEE, pDVar3 == (DNELIPCHKLK_o *)0x0))
        goto LAB_034c6e68;
        CJNHFNHJHPE = (System_String_o *)
                      (*(pDVar3->klass->vtable)._3_ToString.methodPtr)
                                (pDVar3,(pDVar3->klass->vtable)._3_ToString.method);
      }
      if (pKVar5 != (KCFIOKDFHIB_o *)0x0) {
        KCFIOKDFHIB__NBFLGFJIJCL(pKVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
        if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
          KCFIOKDFHIB__GFABHCMJOLH
                    (pMVar4->_JNLLKNHOBDG_k__BackingField,IMMNELPBGIF[4].monitor,(MethodInfo *)0x0);
          if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
            KCFIOKDFHIB__MNGPLNIAIHH
                      (pMVar4->_JNLLKNHOBDG_k__BackingField,(System_String_o *)IMMNELPBGIF[6].klass,
                       (MethodInfo *)0x0);
            if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
              KCFIOKDFHIB__GNCKPENHMCA
                        (pMVar4->_JNLLKNHOBDG_k__BackingField,
                         *(int32_t *)((long)&IMMNELPBGIF[0xe].klass + 4),(MethodInfo *)0x0);
              if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
                KCFIOKDFHIB__GKKEMMNPNJE
                          (pMVar4->_JNLLKNHOBDG_k__BackingField,*(int32_t *)&IMMNELPBGIF[0xe].klass,
                           (MethodInfo *)0x0);
                if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
                  KCFIOKDFHIB__EPICBGAJMIG
                            (pMVar4->_JNLLKNHOBDG_k__BackingField,
                             *(float *)&IMMNELPBGIF[0x10].monitor,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034c6e68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

