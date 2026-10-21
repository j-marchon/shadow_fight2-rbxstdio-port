// Util$$OGAMEOMFKPD @ RVA 0x3209D74

float Util__OGAMEOMFKPD(float MFENNGDJCMF,float CHOCOAGNFDD,float CIGIGIJOFMK,float BLFMJKGBOMI,
                       float KEFILECBPMF,bool JBLDNHFBGCN,int32_t GAJONDLDKLI,MethodInfo *method)

{
  float fVar1;
  
  if ((!JBLDNHFBGCN) ||
     ((fVar1 = CHOCOAGNFDD, KEFILECBPMF < BLFMJKGBOMI &&
      (fVar1 = MFENNGDJCMF, CIGIGIJOFMK < KEFILECBPMF)))) {
    if (1e-10 <= ABS(CHOCOAGNFDD - MFENNGDJCMF) + ABS(BLFMJKGBOMI - CIGIGIJOFMK)) {
      fVar1 = NACOPMMCDPO__BCPFPDPICCE
                        ((KEFILECBPMF - CIGIGIJOFMK) / (BLFMJKGBOMI - CIGIGIJOFMK),GAJONDLDKLI,
                         (MethodInfo *)0x0);
      fVar1 = (CHOCOAGNFDD - MFENNGDJCMF) * fVar1 + MFENNGDJCMF;
    }
    else {
      fVar1 = (MFENNGDJCMF + CHOCOAGNFDD) * 0.5;
    }
  }
  return fVar1;
}

